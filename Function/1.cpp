#include <iostream>
using namespace std;

int area_rectangle(int length = 10, int width = 5)
{
    int area;
    area = length * width;
    return area;
}

int main()
{
    int width, length, n;

    cout << "If you want to enter value of rectangle parameter length/width enter 1 and else enter 2: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter the lenght of rectangle : ";
        cin >> length;
        cout << "Enter the width of rectangle : ";
        cin >> width;
        cout << "Area of Rectangle : "<<area_rectangle(length, width);
        break;
    case 2:
        cout <<"By default Area of Rectangle : "<<area_rectangle();
        break;
    default:
        cout << "Error please choose a valid input :";
    }
    return 0;
}
