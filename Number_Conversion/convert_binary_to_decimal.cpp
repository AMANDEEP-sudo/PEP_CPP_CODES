Move to Number_Conversion/
// write code to convert a binary number to decimal in C++.
#include <iostream>
#include <cmath>
using namespace std;
int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0;
    while (binary != 0) {
        int lastDigit = binary % 10;
        binary = binary / 10;
        decimal = decimal  + lastDigit * pow(2, i);
        ++i;
    }
    return decimal;
}
int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}