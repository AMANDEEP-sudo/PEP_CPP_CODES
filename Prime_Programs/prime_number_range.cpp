Move to Prime_Programs/
// write code to print prime numbers in a given range.```cpp
#include <iostream>
using namespace std;
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}
int main() {
    int low, high;

    cout << "Enter the low and high range: ";
    cin >> low >> high;

    cout << "Prime numbers between " << low << " and " << high << " are:" << endl;
    for (int num = low; num <= high; ++num) {
        if (isPrime(num)) {
            cout << num << " ";
        }
    }
    cout << endl;

    return 0;
}