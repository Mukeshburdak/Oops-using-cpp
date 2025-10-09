#include <iostream>
using namespace std;

class DB;
// forward declaration of class;
class DM
{
    float distance;
    friend float addition(DM x, DB y);

public:
    float getdata()
    {
        int choice;
        float p;
        cout << "Choose one option for input in meter[1] and for centimeter[2] : ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the distance in meter : ";
            cin >> p;
            distance = p * 100;
        }
        else
        {
            cout << "Enter the distance in centimeter :" << endl;
            cin >> distance;
        }
    }
};
class DB
{
    float dist;
    friend float addition(DM x, DB y);

public:
    float getdata()
    {
        int choice;
        float p;
        cout << "Choose one option for input in feet[1] and for inches[2] : ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter the distance in feet : ";
            cin >> p;
            dist = p * 12;
        }
        else
        {
            cout << "Enter the distance in inches : ";
            cin >> dist;
        }
    }
};

float addition(DM x, DB y)
{
    float p;
    p = x.distance + y.dist * 2.54;
    return p / 100;
}

int main()
{
    DM m;
    DB n;
    cout << "This platform for calculating/Addition of distances :" << endl;
    m.getdata();
    n.getdata();
    cout << "Distance in meter : " << addition(m, n);
    return 0;
}
