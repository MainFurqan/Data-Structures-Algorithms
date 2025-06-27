#include <iostream>
#include <vector>
using namespace std;

// LeetCode 
// PS 11: Container with Most Water
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.

class Solution {
public:

    int containerMostWater(vector<int>& height) {      // Brute Force Approach, O(n^2) 
        
        int maxArea = 0;

        for (int i = 0; i < height.size(); i++)
        {
            for (int j = i; j < height.size(); j++)
            {
                int h = min(height[i], height[j]);
                int w = j - i;
                maxArea = max(maxArea, h * w);
            }
        }
        return maxArea;
    }


    int containerMostWater_op(vector<int>& height) {     // Optimize O(n)
        
        int maxWater = 0;
        int i = 0;
        int j = height.size()-1;

        while( i < j)
        {
            int h = min(height[i], height[j]);  
            int w = j - i;                       
            maxWater = max(maxWater, h * w);       

            if (height[i] < height[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return maxWater;
    }

};


int main() {

    vector <int> height = {1,8,6,2,5,4,8,3,7};

    Solution s1;

    // cout << s1.containerMostWater(height) << endl;
    
    cout << s1.containerMostWater_op(height) << endl;

    return 0;
}