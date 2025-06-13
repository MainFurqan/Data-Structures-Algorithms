#include <iostream>
#include <vector>
using namespace std;


// one way for converting decimal to binary 
void decimal_binary(int num) {
    vector<int> arr;

    // Edge case for 0
    if (num == 0) {
        cout << "0";
        return;
    }

    while (num > 0) {
        arr.push_back(num % 2);  // store remainder
        num = num / 2;           // update number
    }

    // Print binary in reverse
    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i];
    }
}

// Second way for converting decimal to binary
int decimal_binary2(int num) { 

    int ans, pow = 1;

    while (num > 0)
    {
        int reminder = num%2;
        num /= 2;
        ans += (reminder * pow);
        pow *= 10;
    }

    return ans;
}


int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Binary: " << decimal_binary2(n) << endl;  // Second function
    cout << "Binary: ";
    decimal_binary(n); // First function
    cout << endl;


    return 0;
}
