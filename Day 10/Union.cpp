// Program to Calculate union of two arrays
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    set<int> unionSet(arr1, arr1 + 5);
    unionSet.insert(arr2, arr2 + 5);

    cout << "Union of the two arrays: ";
    for (int x : unionSet)
    {
        cout << x << " ";
    }
    return 0;
}