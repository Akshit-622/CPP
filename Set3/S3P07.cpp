#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length;
    int width;
    int area;
    void set_data()
    {
        cout << "Enter Length and Width: ";
        cin >> length >> width;
    }
    void check_area(Rectangle r2)
    {
        area = length * width;
        r2.area = r2.length * r2.width;
        if (area == r2.area)
        {
            cout << "Both have Same area \n";
        }
        else
        {
            cout << "Both have Different area \n";
        }
    }
};

Rectangle sum(Rectangle r1, Rectangle r2)
{
    Rectangle r3;
    r3.length = r1.length + r2.length;
    r3.width = r1.width + r2.width;
    return r3;
}
int main()
{
    Rectangle r1, r2, r3;
    r1.set_data();
    r2.set_data();
    r1.check_area(r2);
    r3 = sum(r1, r2);
    cout << "Corresponding Lenght and Width: " << r3.length << " and " << r3.width;
    return 0;
}