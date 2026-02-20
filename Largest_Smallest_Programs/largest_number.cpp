// ...existing code from largest_number.cpp...Move to Largest_Smallest_Programs/
// write code to print the largest number among three numbers entered by the user.```cpp
#include <iostream> 
using namespace std;
int main() {
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    double largest = num1;

    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}