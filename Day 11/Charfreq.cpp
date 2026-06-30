// Program to calculate frequency of characters in a string using map
#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    map<char, int> frequency;
    for (char c : str)
    {
        frequency[c]++;
    }

    cout << "Frequency of each character: " << endl;
    for (const auto &pair : frequency)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
