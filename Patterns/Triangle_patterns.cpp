#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows

    // Character version
    char alpha = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << alpha << " ";
        }
        alpha++;
        cout << endl;
    }
    

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {  
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {  
    //         cout << i + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = 1; j <= i+1; j++) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
