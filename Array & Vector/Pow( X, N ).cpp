#include <iostream> 
#include <vector>
#include <math.h>
using namespace std;

// LeetCode
// PS-50
// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution {
public:
    double myPow(double x, int n) {                // Binary Exponentiation 
        // Handle 0^n (undefined for n <= 0)
        if (x == 0) {
            if (n <= 0) throw runtime_error("Undefined: 0 raised to 0 or negative power");
            return 0;
        }

        // Handle trivial exponent cases
        if (n == 0) return 1;
        if (x == 1.0) return 1;

        long long expo = n; // Prevent overflow when negating INT_MIN
        if (expo < 0) {
            x = 1.0 / x;
            expo = -expo;
        }

        double ans = 1.0;
        while (expo > 0) {
            if (expo % 2 == 1) {
                ans *= x;
            }
            x *= x;
            expo /= 2;
        }

        return ans;
    }
};


int main() {
    double x = 9;
    int n = -9;

    Solution s1;

    cout << s1.myPow(x, n) << endl;
    return 0;
}