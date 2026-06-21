// Program to find factorial of a number using function
#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int result = 1;
        for (int i = 2; i <= n; ++i)
        {
            result *= i;
        }
        return result;
    }
}

int main()
{
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    int result = factorial(num);
    if (result != -1)
    {
        cout << "The factorial of " << num << " is: " << result << endl;
    }

    return 0;
}