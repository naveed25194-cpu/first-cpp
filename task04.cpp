#include <iostream>
#include <string>
using namespace std;

// Time Complexity: O(1) - Constant time execution for basic arithmetic and standard I/O operations.
// Space Complexity: O(1) - Constant memory allocation for integer and string variables.

int main() {
    string name;
    int age;
    float gpa;

    // Read student information
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter GPA: ";
    cin >> gpa;

    // Calculate birth year using 2026 - age
    int birthYear = 2026 - age;

    // Display student information and calculated birth year
    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;
    cout << "Birth Year: " << birthYear << endl;

    return 0;
}