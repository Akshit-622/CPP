#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
    int acc_num;

public:
    string name;
    static int total;
    BankAccount()
    {
        cout << "Enter Name: " << endl;
        getline(cin >> ws, name);
        cout << "Enter Account Number: " << endl;
        cin >> acc_num;
        total++;
    }
    static void count();
};
int BankAccount::total{0};
void BankAccount::count()
{
    cout << "Total BankAccounts: " << BankAccount::total << endl;
}
int main()
{
    BankAccount b1, b2, b3;
    BankAccount::count();
    return 0;
}