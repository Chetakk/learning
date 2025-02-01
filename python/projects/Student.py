import sqlite3
from tkinter import Tk, Button, Label, Entry, StringVar, messagebox, Listbox

# Database setup
def setup_database():
    conn = sqlite3.connect("students.db")
    cursor = conn.cursor()
    cursor.execute("""
        CREATE TABLE IF NOT EXISTS students (
            name TEXT PRIMARY KEY,
            score INTEGER
        )
    """)
    conn.commit()
    conn.close()

setup_database()

# Functions for database operations
def add_student(name, score):
    conn = sqlite3.connect("students.db")
    cursor = conn.cursor()
    try:
        cursor.execute("INSERT INTO students (name, score) VALUES (?, ?)", (name, score))
        conn.commit()
        messagebox.showinfo("Success", "Student added successfully!")
    except sqlite3.IntegrityError:
        messagebox.showerror("Error", "Student already exists!")
    conn.close()

def update_score(name, score):
    conn = sqlite3.connect("students.db")
    cursor = conn.cursor()
    cursor.execute("UPDATE students SET score = ? WHERE name = ?", (score, name))
    if cursor.rowcount > 0:
        conn.commit()
        messagebox.showinfo("Success", "Score updated successfully!")
    else:
        messagebox.showerror("Error", "Student not found!")
    conn.close()

def get_max_score():
    conn = sqlite3.connect("students.db")
    cursor = conn.cursor()
    cursor.execute("SELECT name, score FROM students ORDER BY score DESC LIMIT 1")
    result = cursor.fetchone()
    conn.close()
    if result:
        return result
    else:
        return None

def get_all_students():
    conn = sqlite3.connect("students.db")
    cursor = conn.cursor()
    cursor.execute("SELECT name, score FROM students")
    results = cursor.fetchall()
    conn.close()
    return results

# GUI setup
def add_student_gui():
    def submit():
        name = name_var.get().strip()
        score = score_var.get().strip()
        if name and score.isdigit():
            add_student(name, int(score))
            name_var.set("")
            score_var.set("")
        # else:
        #     messagebox.showerror("Error", "Please enter valid inputs!")

    add_window = Tk()
    add_window.title("Add Student")

    Label(add_window, text="Student Name").grid(row=0, column=0, padx=10, pady=10)
    name_var = StringVar()
    Entry(add_window, textvariable=name_var).grid(row=0, column=1, padx=10, pady=10)

    Label(add_window, text="Score").grid(row=1, column=0, padx=10, pady=10)
    score_var = StringVar()
    Entry(add_window, textvariable=score_var).grid(row=1, column=1, padx=10, pady=10)

    Button(add_window, text="Submit", command=submit).grid(row=2, column=0, columnspan=2, pady=10)
    add_window.mainloop()

def update_score_gui():
    def submit():
        name = name_var.get().strip()
        score = score_var.get().strip()
        if name and score.isdigit() and int(score) >= 0:
            update_score(name, int(score))
            name_var.set("")
            score_var.set("")
        # else:
        #     messagebox.showerror("Error", "Please enter valid inputs!")

    update_window = Tk()
    update_window.title("Update Score")

    Label(update_window, text="Student Name").grid(row=0, column=0, padx=10, pady=10)
    name_var = StringVar()
    Entry(update_window, textvariable=name_var).grid(row=0, column=1, padx=10, pady=10)

    Label(update_window, text="New Score").grid(row=1, column=0, padx=10, pady=10)
    score_var = StringVar()
    Entry(update_window, textvariable=score_var).grid(row=1, column=1, padx=10, pady=10)

    Button(update_window, text="Submit", command=submit).grid(row=2, column=0, columnspan=2, pady=10)
    update_window.mainloop()

def find_max_score_gui():
    result = get_max_score()
    if result:
        name, score = result
        messagebox.showinfo("Max Score", f"Student: {name}\nScore: {score}")
    else:
        messagebox.showinfo("Max Score", "No data available!")

def view_students_gui():
    view_window = Tk()
    view_window.title("View Students")

    students_list = Listbox(view_window, width=50)
    students_list.pack(padx=10, pady=10)

    students = get_all_students()
    for student in students:
        students_list.insert('end', f"Name: {student[0]}, Score: {student[1]}")

    Button(view_window, text="Close", command=view_window.destroy).pack(pady=10)
    view_window.mainloop()

def main_menu():
    root = Tk()
    root.title("Student Management System")

    Button(root, text="Add Student", command=add_student_gui).pack(pady=10)
    Button(root, text="Update Score", command=update_score_gui).pack(pady=10)
    Button(root, text="Find Max Score", command=find_max_score_gui).pack(pady=10)
    Button(root, text="View Students", command=view_students_gui).pack(pady=10)
    Button(root, text="Exit", command=root.destroy).pack(pady=10)

    root.mainloop()

if __name__ == "__main__":
    main_menu()