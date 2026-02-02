// A company is transmitting data to another server. The data is in the form of numbers. To secure the data during transmission, they plan to obtain a security key that will be sent along with the data. The security key is identified as the count of the repeating digits in the data.
// Write an algorithm to find the security key for the data. Input
// The input consists of an integer data, representing the data to be transmitted. Output
// Print an integer representing the security key for the given data. If no data is repeated it should display
// -1

// do not use any built-in functions to find the frequency of digits.
#include <iostream>
using namespace std;

int main() {
    long long data;
    cout << "Enter data: ";
    cin >> data;

   int freq[10] = {0};
   int securityKey = 0;

   while(data >0){
    int digit = data % 10;
    freq[digit]++;
    data = data/10;
    
   }

    // Count digits that repeat
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 1) {
            securityKey++;
        }
    }

    if (securityKey == 0)
        cout << -1;
    else
        cout << securityKey;

    return 0;
}
