Move to Math_Operations/

#include <iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	int arr[100];
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		int num = arr[i];
		int sq = 1;
        
		while(sq * sq < num) {
			sq++;
		}
		if(sq * sq == num) {
			count++;
		}
	}
	cout << "Number of perfect squares: " << count << endl;
	return 0;
}
