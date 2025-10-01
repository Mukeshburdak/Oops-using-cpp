#include<iostream>
using namespace std;

int main(){
    float gross_salary, basic,da,ta,HRA;

    cout<<"Enter the Basic Pay of your Salary : ";
    cin>>basic;

    da = basic*0.46;
    ta = basic*0.08;
    HRA = basic*0.09;

    gross_salary = basic+da+ta+HRA;

    cout<<"your gross salary is : "<<gross_salary;

    return 0;
}
