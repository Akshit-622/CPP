#include <iostream>
#include <iostream>
using namespace std;
class Book
{
    string Title;
    string Name;

public:
    Book()
    {
        cout << "Enter Title ";
        getline(cin, Title);
        cout << "Enter Author's Name ";
        getline(cin, Name);
    }
    void display()
    {
        cout << "----Book Details----\n";
        cout << "Title: " << Title << endl;
        cout << "Author's Name: " << Name << endl;
    }
};
class EBook : public Book
{
    int size;
    string Format;

public:
    EBook()
    {
        cout << "Enter Size in MB: ";
        cin >> size;
        cout << "Enter File Format: ";
        cin >> Format;
    }
    void Display()
    {
        Book::display();
        cout << "Size: " << size << " MB " << endl;
        cout << "Format: " << Format << endl;
    }
};
int main()
{
    EBook b1, b2, b3;
    b1.Display();
    b2.Display();
    b3.Display();
    return 0;
}
