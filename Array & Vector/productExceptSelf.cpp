#include <iostream>
#include <vector>
using namespace std;

// LeetCode 
// PS 238: Product of Array Except self
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

class Solution {
public:
    
    vector<int> productExceptSelf(vector<int>& nums) {           // Brute Force approach
        
        int n = nums.size();     // O(1)                       // Calculation of TC is written in commands
        vector<int> ans(n, 1);  // O(n)

        int i = 0, j=0;         // O(1)

        while (i < n)                // O(n)          // My optimize nested loop  
        {
            if(i != j) {                // O(n-i)
                ans[i] *= nums[j];      // O(1)
            }

            j++;                  // O(1)

            if (j == n)          // O(1)
            {
                i++;              // O(1)
                j = 0;            // O(1) 
            }
        }
        return ans;     // O(1) + O(n) + O(1) + ( O(n) * ( O(n-i) + O(1) + O(1) + O(1) + O(1) + O(1) ) )
                        // O(n) + ( O(n) *  O(n)  )
                        // O(n) + O(n^2)
                        // O(n^2) (Ans)
    }

    vector<int> productExceptSelf_op(vector<int>& nums) {           // O(n) TC & O(n) SC  
        
        int n = nums.size();     // O(1)
        vector<int> ans(n, 1);   // O(n)

        vector<int> prefix(n, 1);   // O(n)
        vector<int> suffix(n, 1);   // O(n)


        for(int i = 1; i < n; i++) {      // Prefix calculation 
            prefix[i] = prefix[i-1] * nums[i-1];
        } 

        for(int i = n-2; i >= 0 ; i--) {      // suffix calculation 
            suffix[i] = suffix[i+1] * nums[i+1];
        }

        for(int i = 0; i < n; i++) {      // ans calculation 
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;     
    }


    vector<int> productExceptSelf_op_2(vector<int>& nums) {            // O(n) TC & O(1) SC  most optimize way
        
        int n = nums.size();     
        vector<int> ans(n, 1);   

        for(int i = 1; i < n; i++) {      // Prefix calculation 
            ans[i] = ans[i-1] * nums[i-1];
        } 

        int suffix =1;

        for(int i = n-2; i >= 0 ; i--) {      // suffix calculation 
            suffix *= nums[i+1];
            ans[i] *= suffix;
        }
        return ans;     
    }

    void print_arr(vector <int> result) {
    for (int value : result) {
        cout << value << " ";
        }
    }
};


int main() {
    vector<int> nums = {1,2,3,4};
    
    Solution s1;

    vector<int> result = s1.productExceptSelf_op(nums);
    s1.print_arr(result);
    
    cout << endl;
    
    vector<int> result_1 = s1.productExceptSelf_op_2(nums);
    s1.print_arr(result_1);

    return 0;
}