#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Leetcode Problem #53: Maximum Subarray Sum

class Solution {
public:

    // Kadane's Algorithm: O(n) time, O(1) space
    int Kadanes_Algorithm(const vector<int>& nums) {
        int maxSum = INT_MIN, currSum = 0;

        for (int value : nums) {
            currSum += value;
            maxSum = max(maxSum, currSum);

            if (currSum < 0) {
                currSum = 0;
            }
        }
        return maxSum;
    }

    // Brute Force: O(n^2)
    void maxSubarraySum_n2(int arr[], int size) {
        int maxSum = INT_MIN;

        for (int start = 0; start < size; ++start) {
            int currSum = 0;
            for (int end = start; end < size; ++end) {
                currSum += arr[end];
                maxSum = max(maxSum, currSum);
            }
        }

        cout << "Maximum Subarray (O(n^2)): " << maxSum << endl;
    }

    // Brute Force: O(n^3) with printed subarrays
    void maxSubarraySum_n3(int arr[], int size) {
        int maxSum = INT_MIN;

        for (int start = 0; start < size; ++start) {
            for (int end = start; end < size; ++end) {
                int currSum = 0;
                cout << "[";
                for (int k = start; k <= end; ++k) {
                    cout << arr[k];
                    if (k < end) cout << ",";
                    currSum += arr[k];
                }
                cout << "] → Sum: " << currSum << endl;

                maxSum = max(maxSum, currSum);
            }
        }

        cout << "Maximum Subarray (O(n^3)): " << maxSum << endl;
    }
};

int main() {
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};
    Solution s1;

    cout << "Kadane's Algorithm (O(n)) Result: " << s1.Kadanes_Algorithm(nums) << endl;

    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int size = sizeof(arr) / sizeof(arr[0]);

    s1.maxSubarraySum_n2(arr, size);
    s1.maxSubarraySum_n3(arr, size);

    return 0;
}
