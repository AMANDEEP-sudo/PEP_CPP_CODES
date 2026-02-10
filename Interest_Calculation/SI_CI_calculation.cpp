// ...existing code from SI_CI_calculation.cpp...// ...existing code from SI_CI_calculation.cpp...Move to Interest_Calculation/
// write a cpp code to calculate si and ci and print the result write it using function and ask user for principal, rate, and time and if they want to calculate simple interest or compound interest.
#include <iostream>
#include <cmath>
using namespace std;
float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

//calculating compound interest
float calculateCompoundInterest(float principal, float rate, float time) {
    return principal * pow((1 + rate / 100), time) - principal;
}
int main() {
    float principal, rate, time;
    int choice;

    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;

    cout << "Choose the type of interest to calculate:\n";
    cout << "1. Simple Interest\n";
    cout << "2. Compound Interest\n";
    cout << "3. Both Simple and Compound Interest\n";
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;



    switch (choice)
    {
    case 1:
        {
            float si = calculateSimpleInterest(principal, rate, time);
            cout << "Simple Interest is: " << si << endl;
            break;

        }
    case 2:
        {
            float ci = calculateCompoundInterest(principal, rate, time);
            cout << "Compound Interest is: " << ci << endl;
            break;
        }
    case 3:
        {
            float si = calculateSimpleInterest(principal, rate, time);
            float ci = calculateCompoundInterest(principal, rate, time);
            cout << "Simple Interest is: " << si << endl;
            cout << "Compound Interest is: " << ci << endl;
            break;
        }
    default:
        cout << "Invalid choice!" << endl;
        
    }
   

    return 0;
}