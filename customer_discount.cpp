#include<iostream>
using namespace std;
int main(){
    int size;
    int arr[100];
    cout<<"Enter number of customers: ";
    cin>>size;
    int items;
    cout<<"enter items: ";
    cin>>items;
    int discountCounter = 0;


    cout<<"Enter data: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
       if(arr[i] ==items || items %2==0 ){
        discountCounter++;
       }
    }

}