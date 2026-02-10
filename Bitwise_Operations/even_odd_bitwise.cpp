// ...existing code from even_odd_bitwise.cpp...Move to Bitwise_Operations/
#include<iostream>
using namespace std;    

int main(){
    int n;
    cout<<"enter number : ";
    cin >>n;    
    if(n & 1 == 1){
        cout<<"Odd number"<<endl;
    }
    else{
        cout<<"Even number"<<endl;
    }
    
    return 0;
}