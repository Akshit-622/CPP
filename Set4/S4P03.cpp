#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;

public:
    void Set_data()
    {
        cout << "Enter real and imaginary part: " << endl;
        cin >> real >> imag;
    }
    Complex operator+(Complex c2)
    {
        Complex c3;
        c3.real = real + c2.real;
        c3.imag = imag + c2.imag;
        return c3;
    }
    void Display()
    {
        if (real >= 0 && imag >= 0)
        {
            cout << real << " + " << imag << "i" << endl;
        }
        else if (real < 0 && imag < 0)
        {
            cout << real << " - " << imag << "i" << endl;
        }
        else if (real < 0 && imag >= 0)
        {
            cout << real << " + " << imag << "i" << endl;
        }
        else
        {
            cout << real << " - " << imag << "i" << endl;
        }
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.Set_data();
    c2.Set_data();
    c3 = c1 + c2;
    c3.Display();
    return 0;
}