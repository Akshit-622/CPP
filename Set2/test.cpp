/*
#include <iostream>
#include <string>
using namespace std;
class Student{
    string name;
    int roll_no;
    public:
    void setData(){
        cout<<"Enter name \n";
        getline(cin,name);
        cout<<"Enter Roll_NO\n";
        cin>>roll_no;
    }
    void displayData(){
        cout<<"Student Details"<<'\n';
        cout<<"Name: "<<name<<"\n";
        cout<<"Roll No."<<roll_no<<"\n";
    }
};

int main(){
    Student s1;
    s1.setData();
    s1.displayData();
    return 0;
}
    #include <iostream>
using namespace std;
class Rectangle{
    float length;
    float breadth;
    public:
    float area;
    void input(){
        cout<<"Enter Lenght: ";
        cin>>length;
        cout<<"Enter Breadth: ";
        cin>>breadth;
    }
    void calculate_area(){
        area=length*breadth;
    }
    void displayArea(){
        cout<<"Area: "<<area<<"\n";
    }
};
int main(){
    Rectangle o1;
    o1.input();
    o1.calculate_area();
    o1.displayArea();
    return 0;
}
    #include <iostream>
using namespace std;
class Number
{
    int num;

public:
    int flag = 0;
    void input()
    {
        cout << "Enter Number: ";
        cin >> num;
    }
    void isEven()
    {
        if (num % 2 == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }
    void displayResult()
    {
        if (flag == 1)
        {
            cout << num << " is even no. " << "\n";
        }
        else
        {
            cout << num << " is odd no. " << "\n";
        }
    }
};
int main()
{
    Number n1;
    n1.input();
    n1.isEven();
    n1.displayResult();
    return 0;
}
    #include <iostream>
#include <string>
using namespace std;
class Book
{
    string Title;
    string Author;

public:
    Book(string title, string name)
    {
        Title = title;
        Author = name;
    }
    void display()
    {
        cout << "Details are: \n";
        cout << "TITLE: " << Title << "\n";
        cout << "AUTHOR: " << Author << "\n";
    }
};

int main()
{
    string x, y;
    cout << "Enter Title: ";
    getline(cin, x);
    cout << "Enter Author's Name: ";
    getline(cin, y);
    Book b1(x, y);
    b1.display();
    return 0;
}
    #include <iostream>
using namespace std;
class ArraySum{
    int arr[10];
    public:
    ArraySum(){
        cout<<"Enter Elements: \n";
        for (int i = 0; i<10; i++)
        {
            cin>>arr[i];
        }
        
    }
    void findsum(){
        int sum{0};
        for (int i = 0; i < 10; i++)
        {
            sum+=arr[i];
        }
        cout<<"Sum: "<<sum<<"\n";
    }
};

int main(){
    ArraySum a1;
    a1.findsum();
    return 0;
}
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
    #include <iostream>
#include <string>
using namespace std;
class Employee
{
    string employee_name;
    float basic_salary;

public:
    float HRA;
    float DA;
    Employee()
    {
        cout << "Enter Name: ";
        getline(cin, employee_name);
        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void calc_HRA()
    {
        HRA = 0.2 * basic_salary;
    }
    void calc_DA()
    {
        DA = 0.1 * basic_salary;
    }
    void Display_gross()
    {
        float gross;
        gross = basic_salary + HRA + DA;
        cout << "Gross Salary: " << gross;
    }
};
int main()
{
    Employee e1;
    e1.calc_HRA();
    e1.calc_DA();
    e1.Display_gross();
    return 0;
}
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
    #include <iostream>
using namespace std;

class Bank
{
    int account_number;
    int balance{0};

public:
    Bank()
    {
        cout << "Enter Account Number: " << "\n";
        cin >> account_number;
    }
    void deposit(int amt_1)
    {
        balance += amt_1;
    }
    void withdraw(int amt_2)
    {
        if (amt_2 < balance)
        {
            cout << "Withdrawl Succesful \n";
            balance -= amt_2;
        }
        else
        {
            cout << "Insufficent Funds \n";
        }
    }
    void display()
    {
        cout << "Available Balance: " << balance << "\n";
    }
};
int main()
{
    Bank b1;
    int x;
    cout << "Enter Amount to be deposited \n";
    cin >> x;
    b1.deposit(x);
    int y;
    cout << "Enter Withdrawl Amount \n";
    cin >> y;
    b1.withdraw(y);
    b1.display();
    return 0;
}
    #include <iostream>
#include <string>
using namespace std;
class Student
{
    string name;
    int roll_no;
    int marks[5];

public:
    int total{0};
    float perc{0.0};
    char grade;
    Student()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Roll_No.";
        cin >> roll_no;
        cout << "Enter Marks: \n";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void Calc_Total()
    {
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
    }
    void Calc_Perc()
    {
        perc = total / 5.0;
    }
    void Calc_Grade()
    {
        if (perc >= 90)
        {
            grade = 'A';
        }
        else if (perc >= 75)
        {
            grade = 'B';
        }
        else if (perc >= 60)
        {
            grade = 'C';
        }
        else if (perc >= 40)
        {
            grade = 'D';
        }
        else
        {
            grade = 'F';
        }
    }
    void Display()
    {
        cout << "Total Marks " << total << "\n";
        cout << "Percentage: " << perc << "\n";
        cout << "Grade " << grade << "\n";
    }
};
int main()
{
    Student s1;
    s1.Calc_Total();
    s1.Calc_Perc();
    s1.Calc_Grade();
    s1.Display();
    return 0;
}
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























































*/