#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks \n";
    cin>>marks;
    try
    {
        if (marks<0 || marks>100)
        {
            throw "Invalid Marks! Marks Should be between 0 and 100 ";
        }
    }
    catch(const char *msg)
    {
        cout << msg << '\n';
    }
    return 0;
    
}