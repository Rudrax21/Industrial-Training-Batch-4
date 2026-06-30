// Program to Print Unique Elements in a Set
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {1, 2, 3, 4, 5, 1, 2, 3};
    cout << "Unique elements in the set: ";
    for (int x : s)
    {
        cout << x << " ";
    }
    return 0;
}