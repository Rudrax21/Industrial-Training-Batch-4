// Program to find max element in a verctor
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int maxElement = *max_element(v.begin(), v.end());
    cout << "Max element in the vector: " << maxElement << endl;
    return 0;
}