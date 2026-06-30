// program to find intersection of two arrays
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {4, 5, 6, 7, 8};

    for (int x : set1)
    {
        if (set2.count(x))
        {
            cout << x << " ";
        }
    }
}