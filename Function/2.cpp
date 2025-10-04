#include <iostream>
using namespace std;

double power(double n = 1,int p = 2)
{
    double ans = 1;
    int i;
    for (i = 0; i < p; i++)
    {
        ans = ans * n;
    }
    return ans;
}
int main()
{
    double n;
    int p;
    string choice;
    cout << "Enter the value of number : ";
    cin >> n;
    cout << "for input power of number type yes : ";
    cin >> choice;
    if (choice == "yes")
    {
        cout << "Enter the value of power : ";
        cin >> p;
        cout << "Output is n^p: " << power(n,p);
    }
    else
    {
        cout << "Output by default is squared of number : " << power(n);
    }
    return 0;
}
