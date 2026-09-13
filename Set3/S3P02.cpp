#include <iostream>
using namespace std;
class Student
{
public:
    int roll_no;
    int marks;
    void set_data()
    {
        cout << "Enter Roll NO: ";
        cin >> roll_no;
        cout << "Enter Marks: ";
        cin >> marks;
    }
};
Student findtop(Student a, Student b)
{
    if (a.marks >= b.marks)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    Student s1, s2, s3;
    s1.set_data();
    s2.set_data();
    s3 = findtop(s1, s2);
    cout << "Roll No: " << s3.roll_no << " has highest marks: " << s3.marks;
    return 0;
}