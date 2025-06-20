#include <iostream>
#include <vector>
using namespace std;

// LeetCode 
// PS 169: Majority Element 
// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.


class Solution
{
public:
    
    int majorityElement(vector<int> &n) {    // Brute Force Approach  O(n^2) TC

        for (int i = 0; i < n.size(); i++)
        {
            int count = 0;

            for (int j = 0; j < n.size(); j++)
            {
                if (n[i] == n[j])
                {
                    count++;
                }
            }

            if (count > (n.size()/2))
            {
                return n[i];
            }
        }
        return -1;
    }

    int majorityElement2(vector<int> &n) {        // Better but not readable or efficient  
                                                  // This I am find the new approach their TC is O(n) but above line,
        int count = 0;

        for (int i = 0, j = 0; i < n.size(); j++)
        {
            if (n[i] == n[j])
            {
                count++;
            }

            if (count > (n.size()/2))
            {
                return n[i];
            }

            if (j == (n.size()-1))
            {
                i++;
                j = i;
                count = 0;
            }
        }
        return -1;
    }

    int moore_voting(vector <int> &nums) {           // Most optimized approach O(n) TC

        int count = 0, arr;

        for (int i = 0; i < nums.size(); i++)
        {
            if (count == 0)
            {
                arr = nums[i];
            }

            if ( arr == nums[i])
            {
                count++;
            }
            else {
                count--;
            }
        }
        return arr;
    }

};


int main() {

    vector <int> nums = {2, 5, 3, 5, 5, 3, 6, 5, 5, 5, 5, 3, 3, 3, 3, 3, 3, 3, 3, 5, 5, 5, 5, 5, 5};

    Solution s1;

    // cout << s1.majorityElement(nums) << endl;

    // cout << s1.majorityElement2(nums) << endl;
    
    cout << s1.moore_voting(nums) << endl;

    return 0;
}
