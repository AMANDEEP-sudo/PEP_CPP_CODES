// ...existing code from user_input.cpp...Move to User_Input/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

int main() {
    string name, university, course;
    int age, n;
    float total = 0, average;
    char grade;
    string result;

    cout << "========== STUDENT MARKSHEET SYSTEM ==========\n\n";

    // Student details
    cout << "Enter Student Name      : ";
    getline(cin, name);

    cout << "Enter Age               : ";
    cin >> age;
    cin.ignore();   // clear buffer

    cout << "Enter University Name   : ";
    getline(cin, university);

    cout << "Enter Course Name       : ";
    getline(cin, course);

    // Number of subjects
    cout << "\nEnter Number of Subjects: ";
    cin >> n;

    vector<int> marks(n);   // ✅ works with MinGW

    cout << "\nEnter Subject Marks (0 - 100 only)\n";
    for (int i = 0; i < n; i++) {
        do {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100)
                cout << "Invalid! Enter marks between 0 and 100.\n";

        } while (marks[i] < 0 || marks[i] > 100);

        total += marks[i];
    }

    // Calculations
    average = total / n;

    if (average >= 90) grade = 'A';
    else if (average >= 75) grade = 'B';
    else if (average >= 60) grade = 'C';
    else if (average >= 40) grade = 'D';
    else grade = 'F';

    result = (grade == 'F') ? "FAIL" : "PASS";

    // Marksheet display
    cout << "\n=============================================\n";
    cout << "              STUDENT MARKSHEET               \n";
    cout << "=============================================\n";

    cout << left << setw(18) << "Name"       << ": " << name << endl;
    cout << left << setw(18) << "Age"        << ": " << age << endl;
    cout << left << setw(18) << "University" << ": " << university << endl;
    cout << left << setw(18) << "Course"     << ": " << course << endl;

    cout << "\n----------------- MARKS ----------------------\n";
    for (int i = 0; i < n; i++) {
        cout << "Subject " << setw(2) << i + 1 << " : " << marks[i] << endl;
    }

    cout << "---------------------------------------------\n";
    cout << left << setw(18) << "Total Marks" << ": " << total << endl;
    cout << left << setw(18) << "Average (%)" << ": "
         << fixed << setprecision(2) << average << endl;
    cout << left << setw(18) << "Grade"       << ": " << grade << endl;
    cout << left << setw(18) << "Result"      << ": " << result << endl;

    cout << "=============================================\n";
    cout << "       Best of Luck for Your Future!          \n";
    cout << "=============================================\n";

    return 0;
}
