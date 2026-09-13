#include <iostream>
using namespace std;
class BankAccount
{
    int acc_num;
    double balance{0};

public:
    double amount{0};
    BankAccount()
    {
        cout << "Enter Account Number: ";
        cin >> acc_num;
        cout << "Enter Balance: ";
        cin >> balance;
    }
    void transfer(BankAccount &r, double amt)
    {
        if (balance >= amt)
        {
            r.balance += amt;
            balance = balance - amt;
            cout << "Transaction Success \n";
            cout << "Availaible Balance: " << balance;
        }
        else
        {
            cout << "Insufficent Funds";
        }
    }
};
int main()
{
    BankAccount a, b;
    double amt;
    cout << "Enter Amount to be Transfered: ";
    cin >> amt;
    a.transfer(b, amt);
    return 0;
}