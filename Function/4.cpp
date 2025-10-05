#include <iostream>
using namespace std;

int volume(int a);
int volume(int length, int breadth, int height);
float volume(float radius);

int main()
{
    int a, length, breadth, height;
    float radius;
    cout << "Enter the side of cube : ";
    cin >> a;
    cout << "Enter the length of cuboid : ";
    cin >> length;
    cout << "Enter the breadth of cuboid : ";
    cin >> breadth;
    cout << "Enter the height of cuboid : ";
    cin >> height;
    cout << "Enter the radius of sphere : ";
    cin >> radius;

    cout << "Volume of cube : " << volume(a) << endl;
    cout << "Volume of cuboid : " << volume(length, breadth, height) << endl;
    cout << "Volume of sphere : " << volume(radius);
    return 0;
}
int volume(int a)
{
    return a * a * a;
}
int volume(int length, int breadth, int height)
{
    return length * breadth * height;
}
float volume(float radius)
{
    float v;
    v = (4.0 / 3.0) * (22.0/ 7.0) * radius * radius * radius;
    return v;
}
