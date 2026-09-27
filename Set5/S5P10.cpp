#include<iostream>
#include <string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    Person(){
        cout<<"----Enter Details----\n";
        cin.ignore();
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter Age: ";
        cin>>age;
    }
        void display(){
        cout<<"----Person Details---- \n";
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
class Teacher:public Person{
    string subject;
    public:
    Teacher(){
        cout<<"Enter Subject: ";
        cin.ignore();
        getline(cin,subject);
    }
    void display(){
        Person::display();
        cout<<"----Teacher's Details---- \n";
        cout<<"Subject: "<<subject<<endl;
    }
};
class ResearchScholar:public Person{
    string researchtopic;
    public:
    ResearchScholar(){
        cout<<"Enter Research Topic: ";
        cin.ignore();
        getline(cin,researchtopic);
    }
    void display(){
        Person::display();
        cout<<"----Scholar Details---- \n";
        cout<<"Research Topic: "<<researchtopic<<endl;
    }
};

template<class T>
class RecordManager{
    int n;
    T *record;
    public:
    RecordManager(){
        cout<<"Enter Number Of Records: ";
        cin>>n;
        record=new T[n];
    }
    void display_Records(){
        for (int i = 0; i < n; i++)
        {
            record[i].display();
        }
        
    }
    ~RecordManager(){
        delete[] record;
    }
};
int main(){
    RecordManager<Teacher>r1;
    r1.display_Records();
    RecordManager<ResearchScholar>r2;
    r2.display_Records();
    return 0;
}