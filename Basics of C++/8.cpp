#include <iostream>
#include <limits>
using namespace std;

struct Student
{
    string name;
    int Rollno;
    string Degree;
    string Hostel;
    float CurrentCGPA;

    void clearBuffer()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    void addDetails()
    {
        clearBuffer(); // Clear buffer before getline
        cout << "Enter the Details of Yourself : " << endl;

        cout << "Enter your Name : ";
        getline(cin, name);

        cout << "Enter your Rollno : ";
        cin >> Rollno;
        clearBuffer();

        cout << "Enter your Degree : ";
        getline(cin, Degree);

        cout << "Enter your Hostel Details : ";
        getline(cin, Hostel);

        cout << "Enter your Current CGPA : ";
        cin >> CurrentCGPA;
    }

    void updateDetails()
    {
        cout << "Please Update your details : " << endl;
        addDetails();
    }

    void updateCGPA()
    {
        cout << "Please Update your CGPA : ";
        cin >> CurrentCGPA;
    }

    void updateResidenceInfo()
    {
        clearBuffer();
        cout << "Please update Residence info : ";
        getline(cin, Hostel);
    }

    void displayDetails()
    {
        cout << "\n------ Student Details ------\n";
        cout << "Name = " << name << endl;
        cout << "Rollno = " << Rollno << endl;
        cout << "Degree = " << Degree << endl;
        cout << "Current CGPA = " << CurrentCGPA << endl;
        cout << "Hostel = " << Hostel << endl;
        cout << "-----------------------------\n";
    }
};

int main()
{
    Student s;
    int choice;
    do
    {
        cout << "\nChoose one option:\n"
             << "1 - Add Details\n"
             << "2 - Update Details\n"
             << "3 - Update CGPA\n"
             << "4 - Update Residence Info\n"
             << "5 - Display Details\n"
             << "0 - Exit\n"
             << "Your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.addDetails();
            break;
        case 2:
            s.updateDetails();
            break;
        case 3:
            s.updateCGPA();
            break;
        case 4:
            s.updateResidenceInfo();
            break;
        case 5:
            s.displayDetails();
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
