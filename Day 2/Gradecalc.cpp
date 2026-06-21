// Program to calculate grade based on marks obtained in a subject
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter marks obtained (0-100): ";
    cin >> marks;

    if (marks < 0 || marks > 100)
    {
        cout << "Invalid marks entered. Please enter a value between 0 and 100." << endl;
        return 1;
    }

    char grade;

    if (marks >= 90)
    {
        grade = 'A';
    }
    else if (marks >= 80)
    {
        grade = 'B';
    }
    else if (marks >= 70)
    {
        grade = 'C';
    }
    else if (marks >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << "The grade is: " << grade << endl;

    return 0;
}