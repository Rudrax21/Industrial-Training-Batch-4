// Program to find the minimum element in a vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int minElement = *min_element(v.begin(), v.end());
    cout << "Min element in the vector: " << minElement << endl;
    return 0;
}