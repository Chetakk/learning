
dict1={}
name=""
def cr():
    n=int(input('Enter the numbers of persons'))
    for i in range(0,n):
        name=input("Enter the name of the person :")
        mobile1=int(input("Enter Mobile Number 1 :"))
        mobile2=int(input("Enter the Mobile Number 2 :"))
        emailid=input('Enter the Email ID:')
        dict1[name]={"Mobile Number 1":mobile1,"Mobile Number 2":mobile2,"Email ID":emailid}
    print(dict1)

cr()

def printt():
    n=int(input("Enter the number of people(n)"))
    c = 1
    for i in dict1:
        print(dict1[i])
        if c == n:
            break
        c +=1

    
def search():
    name=input("Enter the name that you want to search for :")
    if dict1.get(name)!=None:
        print(dict1.get(name))
    else:
        print("ROCORDS NOT FOUND!!!")

def update():
    name=input("Enter the name :")
    if dict1.get(name)!=None:
        gmail=input("Enter the new Email ID :")
        dict1[name]["Email ID"]=gmail
        print(dict1)
    else:
        print("ROCORDS NOT FOUND!!!")

def deletee():
    name=input("Enter the name :")
    if dict1.get(name)!=None:
        del dict1[name]
        print(dict1)
    else:
        print("ROCORDS NOT FOUND!!!")
    

while True:
    print("Enter the value  1 to print the telephone directory for n number of people")
    print("Enter the value  2 to get the Mobile number and E-mail")
    print("Enter the value  3 to UPDATE the E-mail ")
    print("Enter the value  4 to DELETE the record ")
    print("Enter the value  0 to PRINT the telephone directory")
    print("Enter the value -1 to EXIT")
    k=int(input("Enter your choice : "))
    if k==1:
        printt()
    elif k==2:
        search()
    elif k==3:
        update()
    elif k==4:
        deletee()
    elif k==0:
        print(dict1)
    elif k==-1:
        break
    else:
        print("Not a valid choice")
    
