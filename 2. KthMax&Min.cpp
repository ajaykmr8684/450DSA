/*

Find Kth max and min element in array


*/

#include<bits/stdc++.h>
using namespace std;

void KthmaxAndMin(vector<int> &arr, int k) {

	sort(arr.begin(), arr.end());

	cout << "Kth Min: " << arr[k - 1] << endl;
	cout << "Kth Max: " << arr[arr.size() - k] << endl;

}


int main() {
	int x = 6;
	vector<int> arr{7, 10, 4, 3, 20, 15};
	int k = 3;

	KthmaxAndMin(arr, k);
}
