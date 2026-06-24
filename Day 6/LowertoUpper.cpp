// Program to Convert a string from lowercase to uppercase
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout << "Enter any string in lowercase: ";
    getline(cin, str);

    for (char &c : str)
    {
        c = toupper(c);
    }

    cout << "The string in uppercase is: " << str << endl;
}