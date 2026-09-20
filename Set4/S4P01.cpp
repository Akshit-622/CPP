#include <iostream>
using namespace std;
class Area{
    public:
    void area(int x){
        cout<<"Area Of Square: "<<x*x<<endl;
    }
    void area(int x,int y){
        cout<<"Area of Rectangle: "<<x*y<<endl;
    }
    void area(float z){
        cout<<"Area of Circle: "<<3.14*z*z<<endl;
    }    

};
int main(){
    Area a;
    int x,y;
    float z;
    cout<<"Enter Side of Square: "<<endl;
    cin>>x;
    a.area(x);
    cout<<"Enter Lenght and Breadth: "<<endl;
    cin>>x>>y;
    a.area(x,y);
    cout<<"Enter Radius of Circle: "<<endl;
    cin>>z;
    a.area(z);
    return 0;
}