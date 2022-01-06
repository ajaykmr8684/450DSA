/*
Max and minumum in array


*/

#include<bits/stdc++.h>
using namespace std;

void maxAndMin(vector<int> &arr) {

	int miny = INT_MAX;
	int maxy = INT_MIN;


	//minimum

	for (int i = 0; i < arr.size(); ++i) {
		if (arr[i] < miny) {
			miny = arr[i];
		}
	}

	//maximum

	for (int i = 0; i < arr.size(); ++i) {
		if (arr[i] > maxy) {
			maxy = arr[i];

		}
	}


	cout << "Minimum: " << miny << endl;
	cout << "Maximum: " << maxy << endl;

}


int main() {
	int x = 6;
	vector<int> arr{7, 10, 4, 3, 20, 15};

	maxAndMin(arr);
}
