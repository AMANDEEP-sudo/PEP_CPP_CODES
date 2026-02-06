Move to Math_Operations/
#include<iostream>
#include<cmath>
using namespace std;    
int main(){

    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    int element;
    cout<<"Enter target element:";

    cin>>element;

    cout<<"enter array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    

    int counter = 0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(abs(arr[i] - arr[j]) == abs(element)){
                counter++;
            }
            

        }
    }
        cout<<"Difference counter is: "<<counter<<endl;

        
    return 0;
}