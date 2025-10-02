#include<iostream>
using namespace std;
 
namespace ns1{
    int x =10;
}
namespace ns2{
    int x=20;
}
namespace ns3{
    namespace ns33{
        int y = 50;
    }
}
int main(){
   int x=5,y=6;
    cout<<"namespace ns1 : x =  "<<ns1::x<<endl;
    
    cout<<"namespace ns2 : x = "<<ns2::x<<endl;

    cout<<"namespace ns33 : y = "<<ns3::ns33::y<<endl;

    cout<<"main function :x = "<<x;

}
