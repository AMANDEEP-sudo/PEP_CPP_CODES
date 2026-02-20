Move to OTP_Programs/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int nearestPrime(int n)
{
    if (n < 2)
        return 2;

    for (int i = n; i >= 2; i--)
    {
        if (isPrime(i))
            return i;
    }
    return 2;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    int firstValue = a;

    int prime1 = nearestPrime(firstValue);
    int prime2 = nearestPrime(b);

    cout << "Nearest prime to " << a << " is " << prime1 << endl;
    cout << "Nearest prime to " << b << " is " << prime2 << endl;

    int otp = prime2 + prime1;
    cout << "The otp is: " << otp;

    return 0;
}
