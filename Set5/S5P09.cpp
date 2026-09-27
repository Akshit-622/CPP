#include <iostream>
using namespace std;
template <class T>
class Result
{
    T marks[5];

public:
    Result()
    {
        cout << "Enter Marks: \n";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    T get_total()
    {
        T sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        return sum;
    }
    T get_average()
    {
        T sum = get_total();
        T avg = sum / 5;
        return avg;
    }

    T Find_max()
    {
        T max = marks[0];
        for (int i = 0; i < 5; i++)
        {
            if (marks[i] > max)
            {
                max = marks[i];
            }
        }
        return max;
    }

    T Find_Min()
    {
        T min = marks[0];
        for (int i = 0; i < 5; i++)
        {
            if (marks[i] < min)
            {
                min = marks[i];
            }
        }
        return min;
    }
    void display()
    {
        cout << "Total Marks: " << get_total() << endl;
        cout << "Average Marks: " << get_average() << endl;
        cout << "Highest Marks: " << Find_max() << endl;
        cout << "Lowest Marks: " << Find_Min() << endl;
    }
};
int main()
{
    Result<int> r1;
    Result<float> r2;
    r1.display();
    cout<<"-----------\n";
    r2.display();
    return 0;
}