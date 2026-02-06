Move to Swap_Operations/
// code to swap two numbers using a temporary variable.```cpp
#include <iostream>
using namespace std;
int main() {
    double num1, num2, temp;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    
    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}