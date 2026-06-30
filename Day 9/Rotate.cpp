// Program to Rotate a vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int n;
    cout << "Enter number of positions to rotate: ";
    cin >> n;
    rotate(v.begin(), v.begin() + n, v.end());
    cout << "Rotated vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}
