#include <iostream>
#include <string>
using namespace std;
class Student{
    string name;
    int roll_no;
    public:
    void setData(){
        cout<<"Enter name \n";
        getline(cin,name);
        cout<<"Enter Roll_NO\n";
        cin>>roll_no;
    }
    void displayData(){
        cout<<"Student Details"<<'\n';
        cout<<"Name: "<<name<<"\n";
        cout<<"Roll No."<<roll_no<<"\n";
    }
};

int main(){
    Student s1;
    s1.setData();
    s1.displayData();
    return 0;
}