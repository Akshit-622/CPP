#include <iostream>
#include <string>
using namespace std;
class Library
{
public:
    string name;
    string Title;
    Library()
    {
        cout << "Enter Title of Book: ";
        getline(cin, Title);
        cout << "Enter Author's Name: ";
        getline(cin, name);
    }
};
void search(Library arr[], string t)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i].Title == t)
        {
            cout << "Book found!" << endl;
            cout << "Title: " << arr[i].Title << endl;
            cout << "Author: " << arr[i].name << endl;
        }
    }
}
int main()
{
    Library arr[10];
    string title;
    cout << "\nEnter title to search: ";
    getline(cin, title);
    search(arr, title);
    return 0;
}