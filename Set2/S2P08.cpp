#include <iostream>
using namespace std;
class Marks
{
    int arr[5];

public:
    int max;
    Marks()
    {
        cout << "Enter Elements \n";
        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    void find_max()
    {
        for (int i = 0; i < 5; i++)
        {
            if (i == 0)
            {
                max = arr[0];
            }
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
    }
    void display()
    {
        cout << "Highest marks: " << max;
    }
};
int main()
{
    Marks m1;
    m1.find_max();
    m1.display();
    return 0;
}