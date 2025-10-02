#include <iostream>
#include <math.h>
using namespace std;

// Function to calculate the following series
double Series(int n)
{
    int i;
    double sums = 0.0, ser;
    for (i = 1; i <= n; ++i)
    {
        ser = 1 / pow(i, i);
        sums += ser;
    }
    return sums;
}
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return fact(n - 1) * n;
    }
}
double Sin(int deg)
{
    double x = deg * M_PI / 180.0;
    int i, ap = 1;
    double sum1 = 0.0, sum2 = 0.0, sums = 0.0, ser;
    while (ap <= 20)
    {
        ser = pow(x, ap) / fact(ap);
        sum1 += ser;
        ap += 4;
    }

    ap = 3;
    while (ap <= 20)
    {
        ser = pow(x, ap) / fact(ap);
        sum2 += ser;
        ap += 4;
    }
    sums = sum1 - sum2;
    return sums;
}

double Cos(int deg)
{
    double x = deg * M_PI / 180.0;
    int i, ap = 0;
    double sum1 = 0.0, sum2 = 0.0, sums = 0.0, ser;
    if (deg == 90)
    {
        return 0;
    }
    else
    {
        while (ap <= 20)
        {
            ser = pow(x, ap) / fact(ap);
            sum1 += ser;
            ap += 4;
        }

        ap = 2;
        while (ap <= 20)
        {
            ser = pow(x, ap) / fact(ap);
            sum2 += ser;
            ap += 4;
        }
        sums = sum1 - sum2;
        return sums;
    }
}
int main()
{
    int n, num;
    cout << "Enter which case do you want to run : " << endl;
    cout << "-------Sum = 1-------**-------Sinx = 2------**-----cosx = 3-------" << "\n";
    cout << "Choose one option : ";
    cin >> num;
    switch (num)
    {
    case 1:
    {
        cout << "Enter the value of series length : ";
        cin >> n;
        double res = Series(n);
        cout << "Output : " << res;
        break;
    }
    case 2:
    {
        int x;
        cout << "\n"
             << "Enter the value of sine angle : ";
        cin >> x;
        double sin = Sin(x);
        cout << "Output sin" << x << " = " << sin;
        break;
    }
    case 3:
    {
        int x;
        cout << "\n"
             << "Enter the value of cosine angle : ";
        cin >> x;
        double cos = Cos(x);
        cout << "Output cos" << x << " = " << cos;
        break;
    }
    default:
    {
        cout << "Incorrect choice.";
    }
    }

    return 0;
}
