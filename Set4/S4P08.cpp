#include <iostream>
using namespace std;
class B;
class A
{
    int x;

public:
    A()
    {
        cout << "Enter Number 1: " << endl;
        cin >> x;
    };
    friend void Sum(A &n1, B &n2);
};
class B
{
    int y;

public:
    B()
    {
        cout << "Enter Number 2: " << endl;
        cin >> y;
    };
    friend void Sum(A &n1, B &n2);
};
void Sum(A &n1, B &n2)
{
    cout << "Sum: " << n1.x + n2.y << endl;
}
int main()
{
    A n1;
    B n2;
    Sum(n1, n2);
    return 0;
}
