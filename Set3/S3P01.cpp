#include<iostream>
using namespace std;
class Number{
    public:
    int num;
    void Set_data(){
        cout<<"Enter Number: ";
        cin>>num;
    }
};

Number add(Number n1,Number n2){
    Number c;
    c.num=n1.num+n2.num;
    return c;
}

int main(){
    Number a,b,c;
    a.Set_data();
    b.Set_data();
    c=add(a,b);
    cout<<"Sum: "<<c.num;
    return 0;
}