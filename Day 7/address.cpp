// Program to print address of a variable
#include <iostream>
using namespace std;

int main()
{
    int var = 42;
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    return 0;
}