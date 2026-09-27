#include<iostream>
using namespace std;
template<class T>
T compare(T &a,T &b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
    
}
template<class T>
void Swap_values(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    // Integer Values
    int x,y;
    cout<<"Enter Integers: ";
    cin>>x>>y;
    cout<<"Larger: "<<compare(x,y)<<endl;
    Swap_values(x,y);
    cout<<"Swapped Values: "<<x<<" ," <<y<<endl;
    // Float
    float x1,y1;
    cout<<"Enter Float : ";
    cin>>x1>>y1;
    cout<<"Larger: "<<compare(x1,y1)<<endl;
    Swap_values(x1,y1);
    cout<<"Swapped Values: "<<x1<<" ," <<y1<<endl;
    // double
    double x3,y3;
    cout<<"Enter Double : ";
    cin>>x3>>y3;
    cout<<"Larger: "<<compare(x3,y3)<<endl;
    Swap_values(x3,y3);
    cout<<"Swapped Values: "<<x3<<" ," <<y3<<endl;
    // char
    char x4,y4;
    cout<<"Enter char: ";
    cin>>x4>>y4;
    cout<<"Larger: "<<compare(x4,y4)<<endl;
    Swap_values(x4,y4);
    cout<<"Swapped Values: "<<x4<<" ," <<y4<<endl;
    return 0;
}