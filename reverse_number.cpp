Move to Reverse_Programs/
// code to reverse a num.
#include <iostream>
using namespace std;
int main() {
    int num, reverse = 0;

    cout << "Enter an integer: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    cout << "Reversed Number: " << reverse << endl;

    return 0;
}