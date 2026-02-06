Move to Sorting_Searching/
#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }


    // Print all even numbers in input order
    cout << "Array after odd-even sorting: ";
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    // Print all odd numbers in input order
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;



    return 0;
}