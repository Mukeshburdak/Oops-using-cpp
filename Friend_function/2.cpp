#include <iostream>
#include <limits>
using namespace std;

class Product
{
    string name;
    float price, discountPercentage;
    friend float applyDiscount(Product p);

public:
    void getdata();
    void displayProduct();
    void clearBuffer()
    {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
};
void Product ::getdata()
{
    cout << "Enter the product name : ";
    getline(cin, name);
    cout << "Enter the price of product : ";
    cin >> price;
    cout << "Enter the discount in percentage on the product : ";
    cin >> discountPercentage;
    Product::clearBuffer();
}
void Product ::displayProduct()
{
    cout << name << "\t\t";
    cout << price << "\t\t";
    cout << discountPercentage << endl;
}
float applyDiscount(Product p)
{

    return (p.price - (p.price * p.discountPercentage));
}

int main()
{
    Product p[5];
    int i;
    float sum=0.0;
    cout << "Enter the details of product :" << endl;
    for (i = 0; i < 5; i++)
    {
        p[i].getdata();
    }
    cout << endl
         << "***----------- Bill to paid ---------***" << endl
         << "product\t\t" << "price" << "\t\t" << "Discount" << endl;
    for (i = 0; i < 5; i++)
    {
        p[i].displayProduct();
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + applyDiscount(p[i]);
    }
    cout << "Total amount to be paid : " << sum;
}
