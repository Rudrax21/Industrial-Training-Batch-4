// Program to remove duplicate elements from an array using set
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3};
    set<int> s(arr, arr + 8);
    cout << "Array after removing duplicates: ";
    for (int x : s)
    {
        cout << x << " ";
    }
    return 0;
}