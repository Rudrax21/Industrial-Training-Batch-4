// Program to find the first non-repeating character in a string
#include <iostream>
#include <unordered_map>
using namespace std;

int firstNonRepeatingCharacter(const string &str)
{
    unordered_map<char, int> frequency;
    for (char c : str)
    {
        frequency[c]++;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (frequency[str[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int index = firstNonRepeatingCharacter(str);
    if (index != -1)
    {
        cout << "The first non-repeating character is: " << str[index] << endl;
    }
    else
    {
        cout << "There are no non-repeating characters in the string." << endl;
    }

    return 0;
}