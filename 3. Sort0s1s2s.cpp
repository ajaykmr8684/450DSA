/*

Sort 0s, 1s and 2s without using sorting algo.


*/

#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void solve(vector<int> &arr, int n) {
	int i = 0;
	int j = 0;
	int k = n - 1;

	while (i <= k) {
		if (arr[i] == 0) {
			swap(arr[i], arr[j]);
			i++;
			j++;
		} else if (arr[i] == 1) {
			i++;
		} else {
			swap(arr[k], arr[i]);
			k--;
		}
	}
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
		cout << c << endl;
	}
}
