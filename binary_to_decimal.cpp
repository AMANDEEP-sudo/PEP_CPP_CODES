Move to Number_Conversion/
// write cpp code to convert a binary number to decimal in C++ without using cmath library.

#include<iostream>
using namespace std;
int main(){
    long long binary;

    cout<<"Enter a binary number: ";
    cin>>binary;
    int decimal=0, base=1;
    while(binary > 0){
        int digit = binary %10;
        decimal = decimal +digit  * base;
        base = base * 2;
        binary = binary /10;

    }

    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}