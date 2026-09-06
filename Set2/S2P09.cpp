#include <iostream>
using namespace std;

class Bank
{
    int account_number;
    int balance{0};

public:
    Bank()
    {
        cout << "Enter Account Number: " << "\n";
        cin >> account_number;
    }
    void deposit(int amt_1)
    {
        balance += amt_1;
    }
    void withdraw(int amt_2)
    {
        if (amt_2 <= balance)
        {
            cout << "Withdrawl Succesful \n";
            balance -= amt_2;
        }
        else
        {
            cout << "Insufficient Funds \n";
        }
    }
    void display()
    {
        cout << "Available Balance: " << balance << "\n";
    }
};
int main()
{
    Bank b1;
    int x;
    cout << "Enter Amount to be deposited \n";
    cin >> x;
    b1.deposit(x);
    int y;
    cout << "Enter Withdrawl Amount \n";
    cin >> y;
    b1.withdraw(y);
    b1.display();
    return 0;
}