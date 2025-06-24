// LeetCode
// PS-121: Best Time to Buy and Sell Stock

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    
    int BuySellStock(vector <int> prices) {

        int buyStock = prices[0];
        int maxProfilt = 0;

        for (int i = 1; i < prices.size(); i++)  // i=1, 
        {
            if (buyStock < prices[i])     
            {
                maxProfilt = max(maxProfilt, prices[i] - buyStock);
            }
            buyStock = min(buyStock, prices[i]);   // 1,     
        }
        return maxProfilt;
    }


};


int main() {
    vector <int> prices = {7,1,5,3,6,4};

    Solution s1;

    cout << s1.BuySellStock(prices) << endl;

    return 0;
}