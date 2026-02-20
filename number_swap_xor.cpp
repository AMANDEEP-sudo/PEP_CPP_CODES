Move to Swap_Operations/
// swap number using xor operator.```cpp
#include <iostream>
using namespace std;
int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2; //6 , 7

    // Swapping using XOR operator
    num1 = num1 ^ num2; // num1 now becomes 1 (6^7)
    num2 = num1 ^ num2; // num2 becomes 6 (1^7)
    num1 = num1 ^ num2; // num1 becomes 7 (1^6)

    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}