#include <iostream>
#include <string>
using namespace std;
class Text
{
    string str;

public:
    Text(string s)
    {
        str = s;
    }
    void calc_length()
    {
        int i = 0;
        int count{0};
        while (str[i] != '\0')
        {
            count++;
            i++;
        }
        cout << "Length: " << count << "\n";
    }
};

int main()
{
    string x;
    cout << "Enter String: \n";
    getline(cin, x);
    Text s1(x);
    s1.calc_length();
    return 0;
}