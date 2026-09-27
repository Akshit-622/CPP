#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
    int reg_no;
    string name;

public:
    Vehicle()
    {   cout<<"----Enter Vehicle Details----\n";
        cout << "Enter Registration No. :";
        cin >> reg_no;
        cin.ignore();
        cout << "Enter Company Name: ";
        getline(cin, name);
    }
    void display()
    {
        cout << "-----Vehicle Details---- \n";
        cout << "Registration No:" << reg_no << endl;
        cout << "Company Name: " << name << endl;
    }
};

class Car : public Vehicle
{
    string Fuel_type;
    int Engine_Cap;

public:
    Car()
    {
        cout << "Enter Fuel Type: ";
        getline(cin, Fuel_type);
        cout << "Enter Enginer Capacity: ";
        cin >> Engine_Cap;
    }
    void display()
    {
        Vehicle::display();
        cout << "Fuel Type: " << Fuel_type << endl;
        cout << "Engine Capacity: " << Engine_Cap << endl;
    }
};
class Bike : public Vehicle
{
    string Fuel_type;
    int Engine_Cap;

public:
    Bike()
    {   cout << "Enter Fuel Type: ";
        getline(cin, Fuel_type);
        cout << "Enter Enginer Capacity: ";
        cin >> Engine_Cap;
    }
    void display()
    {
        Vehicle::display();
        cout << "Fuel Type: " << Fuel_type << endl;
        cout << "Engine Capacity: " << Engine_Cap << endl;
    }
};
int main(){
    Car c1;
    Bike b1;
    c1.display();
    b1.display();
    return 0;
}