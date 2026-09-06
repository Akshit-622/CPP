#include <iostream>
using namespace std;
class Number
{
    int num;

public:
    int flag = 0;
    void input()
    {
        cout << "Enter Number: ";
        cin >> num;
    }
    void isEven()
    {
        if (num % 2 == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    void displayResult()
    {
        if (flag == 1)
        {
            cout << num << " is even no. " << "\n";
        }
        else
        {
            cout << num << " is odd no. " << "\n";
        }
    }
};
int main()
{
    Number n1;
    n1.input();
    n1.isEven();
    n1.displayResult();
    return 0;
}