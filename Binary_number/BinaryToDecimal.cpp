#include <iostream>
using namespace std;


int BinaryToDecimal(int n) {
    
    int ans=0, pow = 1;
    
    while (n > 0)
    {
        int remin = n%10;
        ans += (remin*pow);

        pow *= 2;
        n /= 10;
    }    
    return ans;
}

int main() {
    int num = 10001101;

    cout << "Decimal: " << BinaryToDecimal(num) << endl;
    return 0;
}