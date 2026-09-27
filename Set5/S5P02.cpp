#include <iostream>
#include <string>
using namespace std;
class Employee
{
    int id;
    string name;

public:
    Employee()
    {
        cout << "Enter Id: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }
    void display()
    {
        cout << "----Employee Details---- \n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};
class Manager : public Employee
{
    string Department;
    double salary;

public:
    Manager()
    {
        cout << "Enter Department: ";
        getline(cin, Department);
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void Display()
    {
        Employee::display();
        cout << "Department: " << Department << endl;
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    Manager arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i].Display();
    }
    
    return 0;
}