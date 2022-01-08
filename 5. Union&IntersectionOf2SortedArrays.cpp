/*

Find Union and Intersection of two sorted arrays

Used set but better is to use unordered_set -> reduces the TC


*/

#include<bits/stdc++.h>
using namespace std;



int solve1(vector<int> arr1, vector<int> arr2) {
	set<int> st;

	for (auto c : arr1) {
		st.insert(c);
	}

	for (auto c : arr2) {
		st.insert(c);
	}

	return st.size();
}


int main() {
	//int x = 6;
	vector<int> arr1{85, 25, 1, 32, 54, 6};
	vector<int> arr2{85, 2};


	int x = solve1(arr1, arr2);
	cout << x;
}