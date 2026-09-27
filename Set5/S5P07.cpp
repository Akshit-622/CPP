#include<iostream>
using namespace std;
template<class T>
class Pair{
    T n1;
    T n2;
    public:
    Pair(){
        cin>>n1>>n2;
    }
    T Find_Max(){
        if (n1>n2)
        {
            return n1;
        }
        return n2;
    }
    T Find_Min(){
        if (n1<n2)
        {
            return n1;
        }
        return n2;
        
    }
    void display(){
        cout<<"Maximum Value: "<<Find_Max()<<endl;
        cout<<"Minimum Value: "<<Find_Min()<<endl;
    }
};
int main(){
    // Integer
    cout<<"Enter Integers: ";
    Pair<int>p1;
    p1.display();
    cout<<"-------------\n";
    // Float
    cout<<"Enter Float: ";
    Pair<float>p2;
    p2.display();
    return 0;


}