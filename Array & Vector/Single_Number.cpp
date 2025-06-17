#include <iostream>
#include <vector>
using namespace std;

// LeetCode Problem # 136:

// PS:
// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// You must implement a solution with a linear runtime complexity and use only constant extra space.
// Example 2:
// Input: nums = [4,1,2,1,2]
// Output: 4


class Solution {
public:

    int singleNumber(vector<int> y){
        int unique = 0;
        for (int value : y)
        {                         // Using XOR: a ^ a = 0, and 0 ^ b = b => all duplicates cancel out, leaving the unique number.
            unique ^= value;      // By using XOR operator the time complexity is linear
        }
        return unique;
    }
};

int main() {
    vector<int> nums = {4,1,2,1,2, 4, 8};
    Solution s1;
    cout << s1.singleNumber(nums) << endl;
    return 0;
}

