// Program to find word frequency in a string using map
#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, str);

    map<string, int> frequency;
    stringstream ss(str);
    string word;
    while (ss >> word)
    {
        frequency[word]++;
    }

    cout << "Frequency of each word: " << endl;
    for (const auto &pair : frequency)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
