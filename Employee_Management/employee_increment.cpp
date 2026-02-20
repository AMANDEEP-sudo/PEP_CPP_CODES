Move to Employee_Management/
#include <iostream>
using namespace std;

int main() {
    char gender, married;
    int age;
    double salary, increment = 0;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter age: ";
    cin >> age;

    cout << "Married? (Y/N): ";
    cin >> married;

    cout << "Enter salary: ";
    cin >> salary;

    // Male employee condition
    if (gender == 'M' || gender == 'm') {
        if (married == 'Y' || married == 'y' && age > 35) {
            increment = 0.20 * salary;
        }
    }
    // Female employee condition
    else if (gender == 'F' || gender == 'f') {
        if (age > 30) {
            if (married == 'Y' || married == 'y') {
                increment = 0.20 * salary;
            } else {
                increment = 0.15 * salary;
            }
        }
    }

    if (increment > 0) {
        cout << "Increment amount: " << increment << endl;
        cout << "New salary: " << salary + increment << endl;
    } else {
        cout << "Employee not eligible for increment." << endl;
    }

    return 0;
}
