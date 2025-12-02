#include <iostream>
#include <conio.h>
using namespace std;

class toolbooth
{
    unsigned int total_car;
    double total_amount;

public:
    toolbooth()
    {
        total_car = 0;
        total_amount = 0;
    }
    int payingCar();
    int nopayCar();
    int display();
};
int toolbooth ::payingCar()
{
    total_amount += 0.5;
    total_car += 1;
    return 0;
}

int toolbooth ::display()
{
    cout <<endl<< "Total cars passing : " << total_car;
    cout <<endl<< "Total amount to be paid : " << total_amount;
    return 0;
}

int toolbooth ::nopayCar()
{
    total_car += 1;
    return 0;
}

int main()
{
    toolbooth s;

    int i = -2;
    char ex;
    while (i != -1)
    {
        cout << "For paying car entry press -> 1 : " << endl
             << "for non paying car entry press -> 0 : ";
        cin >> i;
        cout << "Press Esc for exit :"<<endl;
        if (i == 1)
        {
            s.payingCar();
        }
        else
        {
            s.nopayCar();
        }
        ex = getch();
        if (ex == 27)
        {
            s.display();
            break;
        }
    }

    return 0;
}