#include <iostream>
#include <string>
using namespace std;
class Book
{
    string Title;
    string Author;

public:
    Book(string title, string name)
    {
        Title = title;
        Author = name;
    }
    void display()
    {
        cout << "Details are: \n";
        cout << "TITLE: " << Title << "\n";
        cout << "AUTHOR: " << Author << "\n";
    }
};

int main()
{
    string x, y;
    cout << "Enter Title: ";
    getline(cin, x);
    cout << "Enter Author's Name: ";
    getline(cin, y);
    Book b1(x, y);
    b1.display();
    return 0;
}