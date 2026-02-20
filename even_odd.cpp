Move to Bitwise_Operations/
// check if number is even or odd

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;

    if(n %2 ==0){
        cout<<"Even number ";
    }
    else{
        cout<<"odd number";
    }
    return 0;
}