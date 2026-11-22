#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter Two Numbers: ";
    cin >> a >> b;
    try
    {   float(a / b);
        if (b == 0)
        {
            throw ("Error: Divison by Zero is not Allowed");
        }
    }
    catch (const char* msg)
    {
        cout << msg << '\n';
    }
   

    return 0;
}