// Program to Find the most frequent element in an array using map
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

    int maxFreq = 0;
    int mostFrequentElement = arr[0];
    for (const auto &pair : frequency)
    {
        if (pair.second > maxFreq)
        {
            maxFreq = pair.second;
            mostFrequentElement = pair.first;
        }
    }

    cout << "The most frequent element is: " << mostFrequentElement << endl;
    cout << "Its frequency is: " << maxFreq << endl;

    return 0;
}