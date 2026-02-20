Move to Math_Operations/
// find the factorial of  n  numbers

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number : ";
    cin >>n;

    int fact = 1;

    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    cout<<"Factorial is : "<<fact<<endl;
    return 0;
}