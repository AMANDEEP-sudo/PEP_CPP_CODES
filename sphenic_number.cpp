#include <iostream>
using namespace std;

bool isSphenic(int n) {
    int countDistinctPrimes = 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int exponent = 0;

            while (n % i == 0) {
                n /= i;
                exponent++;
            }

            // If prime repeats → Not sphenic
            if (exponent > 1)
                return false;

            countDistinctPrimes++;
        }
    }

    // If remaining n > 1 → it's also a prime factor
    if (n > 1)
        countDistinctPrimes++;

    return (countDistinctPrimes == 3);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isSphenic(n))
        cout << "Sphenic Number ";
    else
        cout << "Not Sphenic";

    return 0;
}