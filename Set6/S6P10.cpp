#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream source("source.txt");
    ofstream destination("destination.txt");
    if (!source)
    {
        cout<<"File Could not be opened \n";
    }
    char ch;
    while (source.get(ch))
    {
        destination.put(ch);
    }
    source.close();
    destination.close();
    cout<<"Copied Successfully \n";
    return 0;
    
}