#include <iostream>
using namespace std;

class name
{
    double sum(float a, float b)
    {
        return a + b;
    }
    double subtract(float a, float b)
    {
        return a - b;
    }
    double multiply(float a, float b)
    {
        return a * b;
    }
    double division(float a, float b)
    {
        return a / b;
    }

public:
    void simple(int n, float x, float y)
    {
        cout << "Simple operation on data : " << endl;
        switch (n)
        {
        case 1:
            cout << "Sum of two numbers : " << sum(x, y);
            break;
        case 2:
            cout << "Subract of two numbers : " << subtract(x, y);
            break;
        case 3:
            cout << "Multiplication of two numbers : " << multiply(x, y);
            break;
        case 4:
            cout << "Division of two numbers : " << division(x, y);
            break;
        default:
            cout << "Choose the correct value. ";
            break;
        }
    }
};
int main()
{
    float a, b;
    int choice;
    name n;
    cout << "Enter the value of a : ";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;
    cout << "\nChoose one option:\n"
         << "1 - sum\n"
         << "2 - subtract\n"
         << "3 - multipy\n"
         << "4 - division\n"
         << "Your choice: ";
    cin >> choice;

    n.simple(choice,a,b);
  return 0;
}
