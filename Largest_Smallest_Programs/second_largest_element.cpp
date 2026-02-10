// ...existing code from second_largest_element.cpp...Move to Largest_Smallest_Programs/
#include<iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];

    // array input 
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int firstlargest = INT_MIN;
    int secondlargest = INT_MIN;

    int firstsmallest = INT_MAX;
    int secondsmallest = INT_MAX;

    for(int i=0;i<n;i++){
        // for largest element
        if(arr[i]>firstlargest){
            secondlargest = firstlargest;
            firstlargest = arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=firstlargest){
            secondlargest = arr[i];
        }

        // for smallest element
        if(arr[i]<firstsmallest){
            secondsmallest = firstsmallest;
            firstsmallest = arr[i];
        }
        else if(arr[i]<secondsmallest && arr[i]!=firstsmallest){
            secondsmallest = arr[i];
        }
    }


    return 0;
}