// Program to reverse a string using recursion
#include <iostream>
#include <string>
using namespace std;

string reverse(string str, int index)
{
    if (index == str.length() - 1)
        return string(1, str[index]);
    else
        return reverse(str, index + 1) + str[index];
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Reversed string: " << reverse(str, 0) << endl;
    return 0;
}