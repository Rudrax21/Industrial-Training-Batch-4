// Program to print all integers from 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

        cout << "Integers from 1 to " << n << " are:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << "\n";
    }
    cout << endl;

    return 0;
}