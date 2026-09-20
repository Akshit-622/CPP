#include <iostream>
using namespace std;
class Interest
{
    int p;
    float r;
    int t;

public:
    Interest()
    {
        cout << "Enter Princpal Amount: ";
        cin >> p;
        cout << "Enter Rate of interest: ";
        cin >> r;
        cout << "Enter Time Period: ";
        cin >> t;
    }
    inline void Calculate_SI()
    {
        double SI;
        SI = (p * r * t) / 100;
        cout << "Simple Interest: " << SI;
    }
};
int main()
{
    Interest o1;
    o1.Calculate_SI();
    return 0;
}