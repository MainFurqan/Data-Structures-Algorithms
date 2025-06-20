#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:


    int pairSum(vector <int> &x, int target) {    // Brute force approach 

        int pair = 0;

        for (int value : x)
        {
            for (int value2 : x)
            {
                pair = value + value2;

                if (pair == target)
                {
                    cout << "Target: " << target << " \nPair Sum: " << value << ", " << value2 << endl;
                    return 1;
                }
            }
        }

        cout << "Pair Sum of '" << target << "' is not exist.";
        return 0;
    }


    // Optimize approach O(n) using two pointer, assuming sorted input
    pair<int, int> pairSum_Op(vector <int> &x, int target) {         // vector<int> pairSum_Op2(vector <int> &x, int target)

        int sum = 0;                                                // vector<int> ars;

        int star = 0, end = (x.size()-1);

        while ( star < end)
        {
            sum = x[star] + x[end];

            if (target < sum)
            {
                end--;
            }
            else if (target > sum)
            {
                star++;
            }
            else if (target == sum)
            { 
                return {x[star], x[end]};                            // ars.push_back(x[star]);
                                                                     // ars.push_back(x[end]);
                                                                     // return ars;
            }
        }
        cout << "Pair Sum of '" << target << "' is not exist.";
        return {-1, -1};                                                       // return ars;
    }

};


int main() {

    vector <int> y = {0, 23, 34, 45, 56, 78, 90, 92};
    int target = 0;

    Solution s1;

    pair<int, int> result = s1.pairSum_Op(y, target);

    if (result.first != -1 && result.second != -1)
    {
        cout << result.first << " , " << result.second << endl;
    }

    // vector<int> result = s1.pairSum_Op2(y, target);

    // if (result.size() > 0)
    // {
    //     cout << result[0] << " , " << result[1] << endl;
    // }

    return 0;
}