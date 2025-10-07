#include <iostream>
using namespace std;

class Rectangle
{
    float length;
    float breadth;

public:
    void getdata()
    {
        cout << "Enter the length of rectangle : ";
        cin >> length;
        cout << "Enter the breadth of rectangle : ";
        cin >> breadth;
    }
    void display()
    {
        cout << "Length of Rectangle : " << length << endl;
        cout << "Breadth of Rectangle : " << breadth << endl;
    }

private:
    friend float calculateArea(Rectangle r);
    friend float calculatePerimeter(Rectangle r);
    friend Rectangle compareArea(Rectangle r1, Rectangle r2);
};

float calculateArea(Rectangle r)
{
    return r.length * r.breadth;
}
float calculatePerimeter(Rectangle r)
{
    return 2*(r.length + r.breadth);
}
Rectangle compareArea(Rectangle r1, Rectangle r2)
{
    if (calculateArea(r1) > calculateArea(r2))
    {
        return r1;
    }
    else
    {
        return r2;
    }
}
int main()
{
    Rectangle n1, n2,n3;
    double A1, A2;
    cout << "Rectangle 1: \n";
    cout << "Please input the rectangle Geometry : " << endl;
    n1.getdata();
    cout << "User provide the dimensions of the rectangle : " << endl;
    n1.display();

    cout << "Perimeter of Rectangle : " << calculatePerimeter(n1);
    cout << endl;
    A1 = calculateArea(n1);
    cout << "Area of Rectangle : " << A1<<endl<<endl;

    cout << "Rectangle 2: \n";
    cout << "Please input the rectangle Geometry : " << endl;
    n2.getdata();
    cout << "User provide the dimensions of the rectangle : " << endl;
    n2.display();

    cout << "Perimeter of Rectangle : " << calculatePerimeter(n2);
    cout << endl;
    A2 = calculateArea(n2);
    cout << "Area of Rectangle : " << A2<<endl<<endl;
    if (A1 == A2)
    {
        cout << "Both rectangle have same area :";
    }
    else
    { n3 = compareArea(n1,n2);
        cout << "Larger area of rectangle : "<< calculateArea(n3);
    }
    return 0;
}
