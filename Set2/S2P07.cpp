#include <iostream>
#include <string>
using namespace std;
class Employee
{
    string employee_name;
    float basic_salary;

public:
    float HRA;
    float DA;
    Employee()
    {
        cout << "Enter Name: ";
        getline(cin, employee_name);
        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void calc_HRA()
    {
        HRA = 0.2 * basic_salary;
    }
    void calc_DA()
    {
        DA = 0.1 * basic_salary;
    }
    void Display_gross()
    {
        float gross;
        gross = basic_salary + HRA + DA;
        cout << "Gross Salary: " << gross;
    }
};
int main()
{
    Employee e1;
    e1.calc_HRA();
    e1.calc_DA();
    e1.Display_gross();
    return 0;
}