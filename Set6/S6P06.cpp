#include<iostream>
using namespace std;
class Invalid:public exception{
    public:
    const char* what() const noexcept override{
        return "Not eligible for voting";
    }
};
int main(){
    int age;
    cout<<"Enter Age: ";
    cin>>age;
    try
    {
        if (age<18)
        {
            throw Invalid();
        }
        cout<<"Person is ELigible to vote \n";
        
    }
    catch(Invalid &e)
    {
        cout << e.what() << '\n';
    }
    
    return 0;
}