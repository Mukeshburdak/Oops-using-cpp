#include <iostream>
using namespace std;

struct member
{
private:
    float late_days, fine = 0, s = 1;

public:
    void book()
    {
        cout << "Enter the late days to return the book at library : ";
        cin >> late_days;

        if (late_days > 0 && late_days <= 5)
        {
            fine = 0.5 * late_days;
        }
        else if (late_days > 5 && late_days <= 10)
        {
            fine = 1 * (late_days - 5) + 0.5 * 5;
        }
        else if (late_days > 10 && late_days < 30)
        {
            fine = 5 * (late_days - 10) + 1 * 5 + 0.5 * 5;
        }
        else
        {
            s = 0;
        }

        if (s == 1)
        {
            cout << "your late fine : " << fine;
        }
        else
        {
            cout << "The book after 30 days your membership will be  cancelled.";
        }
    }
};

int main()
{
    member m;
    m.book();

    return 0;
}
