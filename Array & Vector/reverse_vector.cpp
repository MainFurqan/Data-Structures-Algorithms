#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class  Solution {
public:
    void reverse_arr(vector<int> &x) {       // Time complexcity O(n)

    for (int i = x.size()-1, j = 0; j < i ; i--, j++)
    {
        swap(x[i], x[j]);  
    }

    }

    void print_arr(vector<int> &x) {
    for ( int value : x)
    {
        cout << value << " ";
    }
    }
};


int main() {
    vector<int> marks = {89, 4, 23, 11, 67, 45, 90};

    Solution s1;
    
    s1.reverse_arr(marks);

    s1.print_arr(marks);

    return 0;
}