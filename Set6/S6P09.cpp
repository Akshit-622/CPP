#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream file("students.txt");
    if (!file)
    {
        cout << "file Could not be opened \n";
    }
    string line;
    string word;

    int characters{0};
    int words{0};
    int lines{0};
    // lines/char
    while (getline(file, line))
    {
        lines++;
        characters += line.length();
    }
    file.clear();
    file.seekg(0);
    while (file >> word)
    {
        words++;
    }
    file.close();
    cout << "Characters = " << characters << endl;
    cout << "Words = " << words << endl;
    cout << "Lines = " << lines << endl;

    return 0;
}