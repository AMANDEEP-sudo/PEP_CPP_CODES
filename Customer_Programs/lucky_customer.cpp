// ...existing code from lucky_customer.cpp...Move to Customer_Programs/
// write a cpp code to print fibonacci series if user enters the input 8 it should print 8th Fibonacci number. statrt from 1th 
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int a = 0, b = 1, fib;
    for (int i = 1; i < n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }

    cout << "Order ID: "<< b << endl;

    return 0;
}