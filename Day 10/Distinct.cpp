// Program to find number of distinct elements in an array
#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 3};
    set<int> s(arr, arr + 8);
    cout << "Number of distinct elements in the array: " << s.size() << endl;
    return 0;
}