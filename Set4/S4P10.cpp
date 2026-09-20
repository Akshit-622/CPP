#include <iostream>
#include <string>
using namespace std;
class Book
{
    int id;
    int price;

public:
    string name;
    static int count;
    Book()
    {
        cout << "---Enter Details--- \n";
        cout << "Enter Name:";
        cin >> name;
        cin.ignore();
        if (name == "done")
        {
            return;
        }
        cout << "Enter Book Id: ";
        cin >> id;
        cout << "Enter Price: ";
        cin >> price;
        count++;
    }
    inline void Discount()
    {
        cout << "------------ \n";
        cout << "Discounted Price: " << price - (0.1 * price) << endl;
    }
    bool operator>(Book &b2)
    {
        if (price >= b2.price)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    friend void costlier(Book &b);
};
int Book::count{0};
void costlier(Book &b)
{
    cout << "Costlier Book Details: " << endl;
    cout << "Id: " << b.id << endl;
    cout << "Name: " << b.name << endl;
    cout << "Price: " << b.price << endl;
}
int main()
{
    Book b1, b2;
    b1.Discount();
    if (b1 > b2)
    {
        costlier(b1);
    }
    else
    {
        costlier(b2);
    }
    cout << "Total Books: " << Book::count;

    return 0;
}