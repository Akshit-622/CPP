#include <iostream>
using namespace std;
class Invalid : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Insufficent Balance";
    }
};
class Bankaccount
{
protected:
    double balance{3000};

public:
    void withdraw()
    {
        int a1;
        cout << "Withdraw:";
        cin >> a1;
        try
        {
            if (a1 > balance)
            {
                throw Invalid();
            }
            balance -= a1;
            cout << "Withdrwal Successful \n";
        }
        catch (Invalid &e)
        {
            cout << e.what() << '\n';
        }
    }
};
int main()
{
    Bankaccount b1;
    b1.withdraw();
    return 0;
}