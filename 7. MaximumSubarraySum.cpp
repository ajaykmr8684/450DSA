
/*
Maximum subarray sum using Kadane Algo.

Iterate over the loop

if sum is less than 0 then make it 0. otherwise if sum is greater than max then update the
max, and finally retun max.
*/



class Solution {
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n) {

        // Your code here
        long long maxi = INT_MIN;
        long long sum = 0;

        for ( int i = 0; i < n; ++i) {
            sum += arr[i];
            maxi = std::max(sum, maxi);

            if (sum < 0) sum = 0;
        }

        return maxi;


    }
};
