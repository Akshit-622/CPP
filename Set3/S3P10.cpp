#include <iostream>
using namespace std;
class Result
{
public:
    int marks[5];
    int roll;
    int total{0};
    void set_data()
    {
        cout << "Enter Roll No: ";
        cin >> roll;
        cout << "Enter marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void calc_result()
    {
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
    }
    void compare(Result r2)
    {
        if (total > r2.total)
        {
            cout << "Roll No: " << roll << " has highest marks " << total << "\n";
        }
        else if (total < r2.total)
        {
            cout << "Roll No: " << r2.roll << " has highest marks " << r2.total << "\n";
        }
        else
        {
            cout << "Both have equal marks \n";
        }
    }
};
Result Find_Topper(Result r1, Result r2, Result r3)
{
    if (r1.total > r2.total && r1.total > r3.total)
    {
        return r1;
    }
    else if (r2.total > r1.total && r2.total > r3.total)
    {
        return r2;
    }
    else
    {
        return r3;
    }
}
Result Add_grace(Result r)
{
    r.total = 0;
    int grace{0};
    for (int i = 0; i < 5 && grace < 20; i++)
    {
        r.marks[i] += 5;
        grace += 5;
    }
    for (int i = 0; i < 5; i++)
    {
        r.total += r.marks[i];
    }

    return r;
}
int main()
{
    Result r1, r2, r3, r4, r5;
    r1.set_data();
    r2.set_data();
    r3.set_data();
    r1.calc_result();
    r2.calc_result();
    r3.calc_result();
    r1.compare(r2);
    r4 = Find_Topper(r1, r2, r3);
    cout << "Roll No: " << r4.roll << " is topper with marks " << r4.total << "\n";
    r5 = Add_grace(r2);
    cout << "New Total Marks: " << r5.total << "\n";
    return 0;
}