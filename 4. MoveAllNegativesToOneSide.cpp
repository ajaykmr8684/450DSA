/*

Move all negatives to one side

2 approaches:
First can be set j=0 and using i iterate over the loop and kep swapping whenever
you find a negatives element

second can be 2 pointer approach,
Check If the left and right pointer elements are negative then simply increment the left pointer.
Otherwise, if the left element is positive and the right element is negative then simply swap the elements, and simultaneously increment and decrement the left and right pointers.
Else if the left element is positive and the right element is also positive then simply decrement the right pointer.
Repeat the above 3 steps until the left pointer ≤ right pointer.


*/

#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void solve(vector<int> &arr, int n) {

	int left = 0;
	int right = n - 1;

	while (left <= right) {

		//both are negatives
		if (arr[left] < 0 && arr[right] < 0) {
			left++;
		} else if (arr[left] > 0 && arr[right] < 0) {
			swap(arr[left], arr[right]);
			left++;
			right--;
		} else if (arr[left] > 0 && arr[right] > 0) {
			right--;
		} else {
			left++;
			right--;
		}
	}
}


// int main() {
// 	int x = 6;
// 	vector<int> arr{7, 10, 4, 3, 20, 15};
// 	int k = 3;

// 	KthmaxAndMin(arr, k);
// }


/* Vector with n */
int main() {
	int n;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}


	solve(arr, n);

	for (auto c : arr) {
		cout << c << " ";
	}
}
