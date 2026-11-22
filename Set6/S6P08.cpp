#include<iostream>
#include<string>
#include <fstream>
using namespace std;
int main(){
    string name;
    int roll;
    int marks;
    ofstream outfile("Students.txt");
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter Name: ";
        getline(cin,name);
        cout<<"Enter roll number and Marks: ";
        cin>>roll>>marks;
        cin.ignore();
        outfile<<name<<" "<<roll<<" "<<marks<<"\n";
        
    }
    return 0;
}
