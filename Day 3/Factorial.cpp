// Program to calculate factorial of a number
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}