#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        // Print increasing numbers
        for (int k = 1; k <= i; k++) {
            cout << k;
        }

        // Print decreasing numbers
        for (int m = i - 1; m >= 1; m--) {
            cout << m;
        }

        cout << endl;
    }

    return 0;
}
