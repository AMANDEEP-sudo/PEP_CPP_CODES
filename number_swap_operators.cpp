Move to Swap_Operations/
// write code in cpp to swap numbers without using a temporary variable.```cpp
#include <iostream> 
using namespace std;
int main() {
    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2; //5 , 6

    
    num1 = num1 + num2;  //num1=6+5=11
    num2 = num1 - num2; //num2=11-6=5
    num1 = num1 - num2; //num1=11-5=6

    cout << "After swapping:" << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}