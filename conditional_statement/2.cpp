#include <iostream>
using namespace std;

int main()
{
    float price, Discount = 0, bill = 0;

    cout << "Please enter price of items for checout enter 0. " << endl;

    while (price != 0)
    {
        cout << "Enter item price (o to checkout): ";
        cin >> price;
        if (price < 0)
        {
            cout << "Invalid price! Skipped." << endl;
            continue;
        }
        else
        {
            bill += price;
        }
    }

    if (bill > 5000)
    {
        Discount = bill * 0.1;
    }
    cout<<"*-------------*-----------------*-------------*-----------------*"<<endl;
    cout << "Total Bill (before discount): " << bill << endl;
    cout << "Discount Applied: " << Discount << endl;
    cout << "Final Bill: " << bill - Discount << endl;
}
