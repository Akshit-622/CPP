#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter Elements: \n";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    int n;
    cout<<"Enter Index: ";
    cin>>n;
    try
    {
        if (n<0 || n>9)
        {
            throw"Error: Array Index out of range";
        }
        cout<<"ELment: "<<arr[n]<<endl;
        
    }
    catch(const char* msg)
    {
        cout<< msg << '\n';
    }
    return 0;
}