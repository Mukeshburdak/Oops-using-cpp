#include <iostream>
using namespace std;

int main()
{
    float late, fine = 0, s = 1;
    cout << "Enter the late days to return the book at library : ";
    cin >> late;

    if (late > 0 && late <= 5)
    {
        fine = 0.5 * late;
    }
    else if (late > 5 && late <= 10)
    {
        fine = 1 * (late - 5) + 0.5 * 5;
    }
    else if (late > 10 && late < 30)
    {
        fine = 5 * (late - 10) + 1 * 5 + 0.5 * 5;
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

    return 0;
}
