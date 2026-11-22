#include <iostream>
using namespace std;
int main()
{
    int x, y;
    char ch;
    cout << "Enter Numbers: ";
    cin >> x >> ch >> y;
    try
    {
        if (ch != '+' && ch != '-' && ch != '/' && ch != '*')
        {
            throw ch;
        }
        if (ch == '/' && y == 0)
        {
            throw 0;
        }
        if (ch == '+')
        {
            cout << x + y << endl;
        }
        else if (ch == '-')
        {
            cout << x - y << endl;
        }
        else if (ch == '/')
        {
            cout << x / y << endl;
        }
        else
        {
            cout << x * y << endl;
        }
    }
    catch (const char)
    {
        cout << "Invalid Operator" << '\n';
    }
    catch (const int)
    {
        cout << "Division by zero error" << endl;
    }
    return 0;
}