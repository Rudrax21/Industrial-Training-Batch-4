// Program for printing Traverse of an array using pointers
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int *p = arr;

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> *(p + i);
    }

    cout << "\nArray elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;

    return 0;
}