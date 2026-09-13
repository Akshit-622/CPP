#include <iostream>
#include <string>
using namespace std;
class Book
{
public:
    int id;
    string Title;
    int copies;
    void set_data()
    {
        cout << "Enter Book Id: ";
        cin >> id;
        cout << "Enter No of Copies: ";
        cin >> copies;
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, Title);
    }
    void Exchange(Book &b2)
    {
        // ID exchange
        int temp_id{0};
        temp_id = id;
        id = b2.id;
        b2.id = temp_id;
        // Copies Exchange
        int temp_cpy{0};
        temp_cpy = copies;
        copies = b2.copies;
        b2.copies = temp_cpy;
        // Title Exchange
        string temp = "";
        for (int i = 0; i < Title.length(); i++)
        {
            temp += Title[i];
        }
        Title = b2.Title;
        b2.Title = temp;
    }
    void Display()
    {
        cout << "Book Details: \n";
        cout << "Title: " << Title << "\n";
        cout << "ID: " << id << "\n";
        cout << "Copies: " << copies << "\n";
    }
};
Book Find_Max(Book b1,Book b2){
    if (b1.copies>b2.copies)
    {
        return b1;
    }
    else{
        return b2;
    }
    
}
int main()
{
    Book b1, b2,b3;
    b1.set_data();
    b2.set_data();
    b1.Exchange(b2);
    b3=Find_Max(b1,b2);
    cout<<"ID: "<<b3.id<<" Title: "<<b3.Title<<" has most copies \n";
    return 0;
}