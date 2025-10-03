#include<iostream>
using namespace std;

int main(){
    string color;
    cout<<"Enter traffic light color: ";
    getline(cin,color);
    if(color =="Red" || color == "red"){
        cout<<"Stop!"<<endl;
    }
    else if(color =="Green" || color == "green"){
        cout<<"Go"<<endl;
    }
    else if(color == "Yellow" || color == "yellow"){
        cout<<"Get Ready"<<endl;
    }
    else{
        cout<<"Invalid input";
    }
}
