#include<iostream>
#include<string>
using namespace std;
class Account{
    protected:
    double balance;
    int acc_no;
    public:
    Account(int acc){
        acc_no=acc;
    }
    virtual void display(){
        
    }
    int get_data(){
        return acc_no;
    }
};
class SavingAccount:public  Account{
    public:
    SavingAccount(double amt,int acc):Account(acc){
        balance=amt;
    }
    void display() override{
        cout<<"-----Saving Account---- \n";
        cout<<"Account Number: "<<Account::get_data()<<"\n";
        cout<<"Balance: "<<balance<<"\n";
    }
};
class CurrentAccount: public Account{
    public:
    CurrentAccount(double amt,int acc):Account(acc){
        balance=amt;
    }
    void display() override{
        cout<<"-----Current Account---- \n";
        cout<<"Account Number: "<<Account::get_data()<<"\n";
        cout<<"Balance: "<<balance<<"\n";
    }
};
int main(){

    SavingAccount s1(14000,10412);
    CurrentAccount c1(250000,13241);


    Account* arr[2]{&s1,&c1};
    for (int i = 0; i < 2; i++)
    {
        arr[i]->display();
    }
    
    
    return 0;
}