#include <iostream>
using namespace std;
class Student
{
public:
    static int count;
    Student()
    {
        cout << "Student Created" << endl;
        count++;
    }
};
int Student::count{0};
int main()
{
    int n;
    cout << "Enter Student Count: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        Student si;
    }

    cout << "Total Students: " << Student::count << endl;
    return 0;
}