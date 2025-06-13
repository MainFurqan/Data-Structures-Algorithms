#include <iostream>
using namespace std;

int main() {
    int n = 4;  // Number of rows
    // int count = 0;  // Counter to print increasing numbers

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {  
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }

    // Character version
    char alpha = 'A';  

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {  
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }

    return 0;
}
