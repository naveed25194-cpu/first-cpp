#include <iostream>
#include <string>
using namespace std;

// Time Complexity: O(1) - Constant execution time for standard I/O operations.
// Space Complexity: O(1) - Constant memory allocation for standard variables.

/* 
 * Task 2 Concepts:
 * - Variable: Named memory location to store data.
 * - cin: Standard input stream to read user input.
 * - cout: Standard output stream to print output.
 */

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

    // Output formatted information
    cout << "\nStudent Information" << endl;
    cout << "-------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "GPA: " << gpa << endl;

    return 0;
}