// Program to Store Student Records using Pairs
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main()
{
    vector<pair<string, int>> students;
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string name;
        int age;
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> name;
        cout << "Enter age of student " << i + 1 << ": ";
        cin >> age;
        students.push_back(make_pair(name, age));
    }

    cout << "Student Records:" << endl;
    for (const auto &student : students)
    {
        cout << "Name: " << student.first << ", Age: " << student.second << endl;
    }

    return 0;
}