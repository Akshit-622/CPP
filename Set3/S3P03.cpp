#include <iostream>
using namespace std;
class Distance
{
    public:
    int feet;
    int inches;
    void set_data()
    {
        cout << "Enter Feet and Inches";
        cin >> feet >> inches;
    }
    Distance Total(Distance d2)
    {
        Distance d3;
        d3.feet = feet + d2.feet;
        d3.inches = inches + d2.inches;
        if (d3.inches >= 12)
        {
            d3.feet++;
            d3.inches -= 12;
        }
        return d3;
    }
};
int main(){
    Distance d1,d2,d3;
    d1.set_data();
    d2.set_data();
    d3=d1.Total(d2);
    cout<<d3.feet<<" feet "<<d3.inches<<" inches ";
    return 0;
}