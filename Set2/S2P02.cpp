#include <iostream>
using namespace std;
class Rectangle{
    float length;
    float breadth;
    public:
    float area;
    void input(){
        cout<<"Enter Length: ";
        cin>>length;
        cout<<"Enter Breadth: ";
        cin>>breadth;
    }
    void calculate_area(){
        area=length*breadth;
    }
    void displayArea(){
        cout<<"Area: "<<area<<"\n";
    }
};
int main(){
    Rectangle o1;
    o1.input();
    o1.calculate_area();
    o1.displayArea();
    return 0;
}