#include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int roll_no;
    int marks[5];

public:
    int total{0};
    float perc{0.0};
    char grade;
    Student()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll_No.";
        cin >> roll_no;
        cout << "Enter Marks: \n";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void Calc_Total()
    {
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
    }
    void Calc_Perc()
    {
        perc = total / 5.0;
    }
    void Calc_Grade()
    {
        if (perc >= 90)
        {
            grade = 'A';
        }
        else if (perc >= 75)
        {
            grade = 'B';
        }
        else if (perc >= 60)
        {
            grade = 'C';
        }
        else if (perc >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
    }
    void Display()
    {
        cout << "Total Marks " << total << "\n";
        cout << "Percentage: " << perc << "\n";
        cout << "Grade " << grade << "\n";
    }
};
int main()
{
    Student s1;
    s1.Calc_Total();
    s1.Calc_Perc();
    s1.Calc_Grade();
    s1.Display();
    return 0;
}