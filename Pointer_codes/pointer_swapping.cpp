#include<iostream>
using namespace  std;

int main(){
    int a = 20, b=10, *p1 = &a, *p2=&b;
    cout<<"Before swapping : "<<endl;
    cout<<"a = "<<a<<", b= "<<b<<endl;
    //swapping using pointers
    // int *temp = p1;
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    cout<<"After swapping : "<<"*p1: "<<*p1<<" *p2: "<< *p2<<endl;


    return 0;
}