#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number; " << endl;
    cin >> n ;
    
    // for (int i = 0; i < n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Square in counting
    int k = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << k << " ";
            k++ ;
        }
        cout << endl;
    }
    return 0;
}