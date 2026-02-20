// ...existing code from numerr_reverse.cpp...Move to Reverse_Programs/
#include<iostream>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string numStr;
    cout << "Enter a number: ";
    getline(cin, numStr);

   
    reverse(numStr.begin(), numStr.end());

    cout << "Reversed number: " << numStr << endl;

    return 0;
}