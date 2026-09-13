#include <iostream>
using namespace std;
#include <cstdlib>
class Complex
{
public:
    int imag;
    int real;
    void set_data()
    {
        cout << "Enter real and imaginary part";
        cin >> real >> imag;
    }
    void add(Complex c2){
    int r1=real + c2.real;
    int i1=imag + c2.imag;
    if (i1 > 0 && r1 > 0)
    {
        cout << r1 << "+" << i1 << "i \n";
    }
    else if (i1 < 0 && r1 > 0)
    {
        cout << r1 << "-" << abs(i1) << "i \n";
    }
    else if (i1 > 0 && r1< 0)
    {
        cout << r1 << "+" << i1 << "i \n";
    }
    else
    {
        cout << r1 << "-" << abs(i1) << "i \n";
    }
    
    }
    Complex Product(Complex c2)
    {
        Complex c3;
        c3.real = (real * c2.real) - (imag * c2.imag);
        c3.imag = (real * c2.imag) + (imag * c2.real);
        return c3;
    }
};
void sub(Complex c1, Complex c2)
{
    int r = c1.real - c2.real;
    int i = c1.imag - c2.imag;
    if (i > 0 && r > 0)
    {
        cout << r << "+" << i << "i \n";
    }
    else if (i < 0 && r > 0)
    {
        cout << r << "-" << abs(i) << "i \n";
    }
    else if (i > 0 && r < 0)
    {
        cout << r << "+" << i << "i \n";
    }
    else
    {
        cout << r << "-" << abs(i) << "i \n";
    }
}

int main()
{
    Complex c1, c2, c3;
    c1.set_data();
    c2.set_data();
    c1.add(c2);
    sub(c1, c2);
    c3 = c1.Product(c2);
    if (c3.real > 0 && c3.imag > 0)
    {
        cout << c3.real << "+" << c3.imag << "i";
    }
    else if (c3.real > 0 && c3.imag < 0)
    {
        cout << c3.real << "-" << abs(c3.imag) << "i";
    }
    else if (c3.real < 0 && c3.imag < 0)
    {
        cout << c3.real << "-" << abs(c3.imag) << "i";
    }
    else
    {
        cout << c3.real << "+" << c3.imag << "i";
    }

    return 0;
}