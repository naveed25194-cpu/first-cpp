#include <iostream>
#include <string>
using namespace std;

// Time Complexity: O(1) - Executes a fixed set of I/O statements.
// Space Complexity: O(1) - Uses a constant amount of memory for local variables.

int main() {
    string name;
    string department;
    int age;
    float gpa;

    // Read student information
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter department: ";
    cin >> department;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    // Display student information
    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}