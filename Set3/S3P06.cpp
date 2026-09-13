#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    string name;
    double salary;
    void set_data()
    {
        cout << "Enter Name: ";
        getline(cin >> ws, name);
        cout << "Enter Salary:";
        cin >> salary;
    }
};
Employee max(Employee arr[], int size)
{
    double max = arr[0].salary;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i].salary > max)
        {
            max = arr[i].salary;
            count=i;
        }
    }
    return arr[count];
}
Employee Increment(Employee e)
{
    e.salary = e.salary * 0.1 + e.salary;
    return e;
}

int main()
{
    int n, ch;
    cout << "Enter No of Employees: ";
    cin >> n;
    Employee *arr = new Employee[n];
    for (int i = 0; i < n; i++)
    {
        arr[i].set_data();
    }
    Employee e1, e2;
    e1 = max(arr, n);
    cout << "Employee " << e1.name << " has " << "Highest Salary " << e1.salary << "\n";
    cout << "Choose the Employee For Increment: ";
    cin >> ch;
    e2 = Increment(arr[ch - 1]);
    cout << "Incremented Salary: " << e2.salary;

    return 0;
}
