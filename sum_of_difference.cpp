#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n - 1; i++)
    {
        int diff = arr[i] - arr[i + 1];
        if (diff < 0)
        {
            diff = -diff;
        }
        sum = sum + diff;
    }

    cout << "Sum of differences: " << sum;

    return 0;
}
