#include <iostream>
using namespace std;
#include <string>
class Product
{
public:
    string name;
    double price;
    int quantity;
    void set_data()
    {
        cout << "Enter Product Name: ";
        getline(cin >> ws, name);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }
    Product Combined(Product p2)
    {
        Product p3;
        p3.quantity = quantity + p2.quantity;
        p3.name = name + "+" + p2.name;
        return p3;
    }
};

Product Total(Product p1, Product p2)
{
    if (p1.price * p1.quantity >= p2.price * p2.quantity)
    {
        return p1;
    }
    else
    {
        return p2;
    }
}
int main()
{
    Product p1, p2, p3, p4;
    p1.set_data();
    p2.set_data();
    p3 = Total(p1, p2);
    cout << "Product Name: " << p3.name << "\n"
         << "Price: " << p3.price << "\n"
         << "Quantity: " << p3.quantity << "\n";
    p4 = p1.Combined(p2);
    cout << "Combined Inventory: \n"
         << " Name:" << p4.name << "\n"
         << " Quantity: " << p4.quantity << "\n";
    return 0;
}