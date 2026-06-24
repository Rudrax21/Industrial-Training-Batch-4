// Program to Reverse an array using pointers
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int *p = arr;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i + 1 << ": ";
        cin >> *(p + i);
    }

    int *start = arr;
    int *end = arr + n - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    cout << "\nReversed array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;
}
