// Program to Calculate Frequency of elements using map
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> frequency;
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    cout << "Frequency of each element: " << endl;
    for (const auto &pair : frequency)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}