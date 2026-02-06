Move to Security/
// write code to print the repeating digit in a given integer array in C++ without using STL.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    cout << "Repeating elements are: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}