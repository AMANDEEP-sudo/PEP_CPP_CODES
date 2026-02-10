// ...existing code from decimal_to_3base_conversion.cpp...Move to Base_Conversion/
// write code to  convert a decimal number to binary.
#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    if (decimal == 0) {
        cout << "Binary: 0";
        return 0;
    }

    int binary[64];
    int index = 0;

    while (decimal > 0) {
        binary[index++] = decimal % 3;
        decimal = decimal / 3;
    }

    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }

    return 0;
}
    