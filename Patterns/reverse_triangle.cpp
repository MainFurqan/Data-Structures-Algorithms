#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;


    // for(int i=0 ; i<n; i++){
    //     for (int j = i+1; j > 0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    
    // Character Version
    
    char alpha = 'A';

    for(int i=0 ; i<n; i++){
        for (int j = 0; j <= i; j++) {
            cout << alpha << " ";
            alpha--;
        }
        alpha = alpha + (i + 2);
        cout << endl;
    }

    return 0;
}