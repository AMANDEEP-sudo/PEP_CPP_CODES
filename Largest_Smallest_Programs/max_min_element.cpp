// ...existing code from max_min_element.cpp...Move to Largest_Smallest_Programs/
// write cpp code and find max and min element in an unsorted  array using for loop.
#include<iostream>
// #include<algorithm>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxElement = arr[0];
    int minElement = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maxElement) {
            maxElement = arr[i];
        }
        if(arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    cout << "Maximum element in the array: " << maxElement << endl;
    cout << "Minimum element in the array: " << minElement << endl;

    return 0;
}