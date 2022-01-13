/*

Rotate the array cycly by 1.


*/

#include<bits/stdc++.h>
using namespace std;


void solve(vector<int> &arr, int n) {

	int last = arr[n - 1];


	for (int i = n - 2; i >= 0; --i) {
		arr[i + 1] = arr[i];
	}

	arr[0] = last;

}







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