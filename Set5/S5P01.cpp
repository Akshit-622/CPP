#include <iostream>
#include <string>
using namespace std;
class Student{
    string name;
    int roll;
    int age;
    public:
    Student(){
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter Roll No.:";
        cin>>roll;
        cout<<"Enter Age: ";
        cin>>age;
    }
    void display(){
        cout<<"-----Student Details-----\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No.: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
    }

};
class EngineeringStudent:public Student{
    string branch;
    int Sem;
    public:
    EngineeringStudent(){
        cin.ignore();
        cout<<"Enter Branch: ";
        getline(cin,branch);
        cout<<"Enter Semester: ";
        cin>>Sem;
    }
    void Display(){
        Student::display();
        cout<<"Branch: "<<branch<<endl;
        cout<<"Semester: "<<Sem<<endl;
    }
};
int main(){
    EngineeringStudent s1;
    s1.Display();
    return 0;
}