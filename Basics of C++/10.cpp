#include <iostream>
using namespace std;

struct Calculator
{
private:
    float num1, num2;
    void Add()
    {
        float sum;
        cout << "Enter the value of number 1 : ";
        cin >> num1;
        cout << "Enter the value of number 2 : ";
        cin >> num2;
        sum = num1 + num2;
        cout << "Addition of two number : " << sum << endl;
    }
    void subtract()
    {
        float sub;
        cout << "Enter the value of number 1 : ";
        cin >> num1;
        cout << "Enter the value of number 2 : ";
        cin >> num2;
        sub = num1 - num2;
        cout << "Subtraction of two number : " << sub << endl;
    }
    void multiply()
    {
        float mul;
        cout << "Enter the value of number 1 : ";
        cin >> num1;
        cout << "Enter the value of number 2 : ";
        cin >> num2;
        mul = num1 * num2;
        cout << "Multiplication of two number : " << mul << endl;
    }
    void divide()
    {
        float div;
        cout << "Enter the value of number 1 : ";
        cin >> num1;
        cout << "Enter the value of number 2 : ";
        cin >> num2;
        div = num1 / num2;
        cout << "Division of two number : " << div << endl;
    }

public:
    void Display()
    {
        int choice;
        cout << "Select one option :Addition = 1 : Subraction = 2 : Multiplication = 3 : Division = 4 :: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Add();
            break;
        }
        case 2:
        {
            subtract();
            break;
        }
        case 3:
        {
            multiply();
            break;
        }
        case 4:
        {
            divide();
            break;
        }
        default:
        {
            cout << "You select incorrect option.";
            break;
        }
        }
    }
};

int main()
{
    Calculator c;
    c.Display();

    return 0;
}
