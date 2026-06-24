// Program to print largest of element of an array using pointers
#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    cout << "Enter no. of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter " << n << " elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    cout << "Largest element in the array: " << largest << endl;
    return 0;
}