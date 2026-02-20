Move to Employee_Management/
// Employee Loan Eligibility Checker
// Problem Description
// An organization allows its employees to take loans under the following rules:
// An employee can take at most 2 loans.
// The total loan amount taken by an employee must not exceed ₹50,000.
// Based on the number of loans already taken, the company decides whether a new loan (or loans) can be approved and how much amount is allowed.
// You are given:
// An integer loansTaken representing the number of loans already taken by the employee.
// Loan amount(s) depending on loansTaken.
// Your task is to determine whether the loan(s) can be approved and print the appropriate message.
// Input Format
// First line: Integer loansTaken
// If loansTaken == 1:
// Next line: existing loan amount
// Next line: new loan amount requested
// If loansTaken == 0:
// Next two lines: first loan amount and second loan amount
// Output Format
// Print messages according to the following rules:
// If loansTaken >= 2
// → "No loans allowed"
// If loansTaken == 1:
// If existing + requested ≤ 50000
// → "Loan approved for amount: X"
// Else
// →
// Loan exceeds limit.
// Maximum loan that can be approved: Y

// If loansTaken == 0:

// If total ≤ 50000
// → "Both loans approved"

// Else
// →

// Total exceeds limit.
// Maximum total loan that can be approved: 50000

// Constraints

// 0 ≤ loansTaken ≤ 2

// 0 ≤ loan amount ≤ 50000

#include <iostream>
using namespace std;

int main() {
    int loansTaken;
    int existingAmount = 0;
    int loan1 = 0, loan2 = 0;
    const int MAX_LIMIT = 50000;
    cout << "Number of loans taken: ";
    cin >> loansTaken;
    if (loansTaken >= 2) {
        cout << "No loans allowed";
    }
    else if (loansTaken == 1) {
        cout << "Enter existing loan amount: ";
        cin >> existingAmount;
        cout << "Enter new loan amount requested: ";
        cin >> loan1;
        if (existingAmount + loan1 <= MAX_LIMIT) {
            cout << "Loan approved for amount: " << loan1;
        } else {
            cout << "Loan exceeds limit."<<endl;
            cout << "Maximum loan that can be approved: "
                 << (MAX_LIMIT - existingAmount);
        }
    }
    else {
        cout << "Enter first loan amount: ";
        cin >> loan1;
        cout << "Enter second loan amount: ";
        cin >> loan2;
        int total = loan1 + loan2;
        if (total <= MAX_LIMIT) {
            cout << "Both loans approved";
        } else {
            cout << "Total exceeds limit."<<endl;
            cout << "Maximum total loan that can be approved: "
                 << MAX_LIMIT;
        }
    }
    
    return 0;
}