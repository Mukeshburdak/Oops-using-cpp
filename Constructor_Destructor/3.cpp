#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string name;
    int id;
    static int employeeCount;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
        employeeCount++;
        cout << name << " (ID: " << id << ") joined the company." << endl;
    }

    ~Employee()
    {
        cout << name << " (ID: " << id << ") left the company." << endl;
        employeeCount--;
    }

    void displayEmployee()
    {
        cout << "Employee Name: " << name << ", ID: " << id << endl;
    }

    static void displayCount()
    {
        cout << "Current active employees: " << employeeCount << endl;
    }
};

int Employee::employeeCount = 0;

int main()
{
    Employee *employees[20];
    int choice, id, index = 0, j;
    string name;

    while (true)
    {
        cout << "\n1. Add Employee\n2. Show Employees\n3. Remove Employee\n4. Exit\n";
        cin >> choice;

        if (choice == 1)
        {
            if (index >= 20)
            {
                cout << "No more space for employees!\n";
                continue;
            }
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;

            employees[index] = new Employee(name, id);
            index++;

            Employee::displayCount();
        }
        else if (choice == 2)
        {
            cout << "\n--- Employee List ---\n";
            for (int i = 0; i < index; i++)
            {
                if (employees[i] != nullptr)
                {
                    employees[i]->displayEmployee();
                }
            }
            Employee::displayCount();
        }
        else if (choice == 3)
        {
            cout << "Enter index (0-" << index - 1 << ") of employee to remove: ";
            cin >> j;

            if (j >= 0 && j < index && employees[j] != nullptr)
            {
                delete employees[j];
                employees[j] = nullptr;
                Employee::displayCount();
            }
            else
            {
                cout << "Invalid index!\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Exiting...\n";

            for (int i = 0; i < index; i++)
            {
                if (employees[i] != nullptr)
                {
                    delete employees[i];
                }
            }
            break;
        }
        else
        {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
