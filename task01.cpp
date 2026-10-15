#include <iostream>
#include <string>
using namespace std;

// Time Complexity: O(1) - Performs a fixed sequence of standard I/O operations.
// Space Complexity: O(1) - Allocates a constant amount of memory for string, int, and float variables.

int main() {
    string name;
    int age;
    float gpa;

    // Input student details
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;

    // Formatted line-by-line output
    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}
