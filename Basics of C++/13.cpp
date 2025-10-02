#include <iostream>
using namespace std;

int main()
{
    float Charges, Units, Total_Charge;
    string Users;
    cout<<"---------- Welcome to Electicity bill generator ---------- "<<endl;
    cout << "Enter the names of users : ";
    getline(cin,Users);
    cout << "Enter the units of your electricity board : ";
    cin >> Units;

    if (Units <= 100 && Units > 0)
    {
        Charges = 60 * Units;
    }
    else if (Units > 100 && Units <= 300)
    {
        Charges = 100 * 60 + (Units - 100) * 80;
    }
    else if (Units > 300)
    {
        Charges = 100 * 60 + 200 * 80 + (Units - 300) * 90;
    }
    else
    {
        Charges = 0;
    }

    if (Total_Charge > 300)
    {
        Total_Charge = (Charges + 50) + (Charges + 50) * 0.15;
    }
    else
    {
        Total_Charge = Charges + 50;
    }

    cout << "*--------------Electricity Bill--------------*" << endl;
    cout << "User Name : " << Users << endl;
    cout << "Amount to paid : " << Total_Charge << endl;

    return 0;
}
