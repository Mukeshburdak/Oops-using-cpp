#include<iostream>
using namespace std;

inline int cube(int a){
    return a*a*a;
}

int main(){
    int a;
    cout<<"Enter side of cube : ";
    cin>>a;
    cout<<"volume of cube : "<<cube(a);
    return 0;
}
