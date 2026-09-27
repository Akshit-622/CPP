#include<iostream>
using namespace std;
template<class T>
class Array{
    T arr[5];
    public:
    void Set_data(){
        cout<<"Enter Elements: \n";
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
        }
    }
    void get_data(){
        cout<<"Elements: \n";
        for ( int i = 0; i < 5; i++)
        {
            cout<<arr[i]<<"\n";
        }
    }   
    T Find_max(){
        T max=arr[0];
        for (int i = 0; i < 5; i++)
        {
            if (arr[i]>max)
            {
                max=arr[i];
            }
        }
        return max;
    }    
    T Find_Min(){
        T min=arr[0];
        for ( int i = 0; i < 5; i++)
        {
            if (arr[i]<min)
            {
                min=arr[i];
            }
            
        }
        return min;
    }    
    void display(){
        cout<<"Maximum Element: "<<Find_max()<<endl;
        cout<<"Minimum Element: "<<Find_Min()<<endl;
    }
};
int main(){
    // Integer
    cout<<"Integer Array \n";
    Array<int>x;
    x.Set_data();
    x.get_data();
    x.display();
    cout<<"Float Array \n";
    Array<float>y;
    y.Set_data();
    y.get_data();
    y.display();
    return 0;
}