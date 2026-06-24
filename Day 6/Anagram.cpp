// Program to check if two strings are anagrams of each other
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);

    for (char &c : str1)
    {
        c = tolower(c);
    }
    for (char &c : str2)
    {
        c = tolower(c);
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if (str1 == str2)
    {
        cout << "The strings are anagrams of each other." << endl;
    }
    else
    {
        cout << "The strings are not anagrams of each other." << endl;
    }

    return 0;
}