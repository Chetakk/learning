#include <iostream>
using namespace std;

class Hospital {
protected:
    string hospital_name;
    int no_of_beds_available;
    float rating;
    string doctor_name;

public:
    void getHospitalDetails() {
        cout << "Enter hospital name: ";
        cin >> hospital_name;
        cout << "Enter number of beds available: ";
        cin >> no_of_beds_available;
        cout << "Enter rating: ";
        cin >> rating;
        cout << "Enter doctor name: ";
        cin >> doctor_name;
    }
};

class Patient {
protected:
    string patient_name;
    int patient_id;
    string patient_contact_no;
    float patient_expenditure;

public:
    void getPatientDetails() {
        cout << "Enter patient name: ";
        cin >> patient_name;
        cout << "Enter patient ID: ";
        cin >> patient_id;
        cout << "Enter patient contact number: ";
        cin >> patient_contact_no;
        cout << "Enter patient expenditure: ";
        cin >> patient_expenditure;
    }
};

class Display : public Hospital, public Patient {
public:
    void displayDetails() {
        cout << "Hospital Name: " << hospital_name << endl;
        cout << "Number of Beds Available: " << no_of_beds_available << endl;
        cout << "Rating: " << rating << endl;
        cout << "Doctor Name: " << doctor_name << endl;
        cout << "Patient Name: " << patient_name << endl;
        cout << "Patient ID: " << patient_id << endl;
        cout << "Patient Contact Number: " << patient_contact_no << endl;
        cout << "Patient Expenditure: " << patient_expenditure << endl;
    }
};

int main() {
    Display display;
    int choice;

    while (true) {
        cout << "Enter 1 to enter hospital details, 2 to enter patient details, 3 to display details, -1 to exit: ";
        cin >> choice;

        switch (choice) {
            case 1:
                display.getHospitalDetails();
                break;
            case 2:
                display.getPatientDetails();
                break;
            case 3:
                display.displayDetails();
                break;
            case -1:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
}