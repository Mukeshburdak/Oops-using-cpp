#include <iostream>
using namespace std;

int main()
{
    string name = "Yes";
    int cas;
    char i;

    cout << "Enter the case do you want to try 1 for for loop ,2 for while loop ,3 for do-while loop : ";
    cin >> cas;

    switch (cas)
    {
    case 1:
    {
        for (; name == "Yes"; cin >> name)
        {
            cout << "Hello world !" << endl;
            cout << "Do you want to continue Write \"Yes\" : ";
        }
        break;
    }
    case 2:
    {
        while (name == "Yes")
        {
            cout << "Hello world !" << endl;
            cout << "Do you want to continue Write \"Yes\" : ";
            cin >> name;
        }
        break;
    }
    case 3:
    {
        do
        {
            cout << "Hello world !" << endl;
            cout << "Do you want to continue Write \"Yes\" : ";
            cin >> name;
        } while (name == "Yes");
        break;
    }

    default:
        cout << "choose a correct number : ";
        break;
    }
    return 0;
}
