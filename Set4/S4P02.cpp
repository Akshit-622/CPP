#include <iostream>
using namespace std;
class Maximum
{
public:
    void max(int x, int y)
    {
        if (x > y)
        {
            cout << x << " is Greatest \n";
        }
        else if (x == y)
        {
            cout << "Both Are Equal \n";
        }
        else
        {
            cout << y << " is Greatest \n";
        }
    }
    void max(int x, int y, int z)
    {
        if (x >= y && x >= z)
        {
            std::cout << "Largest No.: " << y << "\n";
        }
        else if (y >= x && y >= z)
        {
            std::cout << "Largest No.: " << y << "\n";
        }
        else
        {

            std::cout << "Largest No.: " << z << "\n";
        }
    }
    void max(float x, float y)
    {
        if (x > y)
        {
            cout << x << " is Greatest \n";
        }
        else if (x == y)
        {
            cout << "Both Are Equal \n";
        }
        else
        {
            cout << y << " is Greatest \n";
        }
    }
};
int main()
{
    int x, y, z;
    float a, b;
    cout << "Enter Integers: ";
    cin >> x >> y >> z;
    cout << "Enter Float: ";
    cin >> a >> b;
    Maximum m;
    m.max(x, y);
    m.max(x, y, z);
    m.max(a, b);
    return 0;
}