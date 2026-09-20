#include <iostream>
using namespace std;
class Num
{
    int x;
    int y;

public:
    void set_data()
    {
        cout << "Enter Integers: ";
        cin >> x >> y;
    }
    friend void Find_Largest(Num&a);
};
void Find_Largest(Num&a)
{
    if (a.x>a.y)
    {
        cout<<"Largest Number: "<<a.x<<endl;
        
    }
    else if (a.x==a.y)
    {
        cout<<"Both Are Equal"<<endl;
    }
    
    else{
        cout<<"Largest Number: "<<a.y<<endl;
        
    }
}
int main(){
    Num n;
    n.set_data();
    Find_Largest(n);
    return 0;
}