#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number; " << endl;
    cin >> n ;
    
    // square in alphabets

    // for (int i = 0; i < n; i++) {
    //     char alpha = 'A';
    //     for (int j = 1; j <= n; j++) {
    //         cout << alpha << " ";
    //         alpha++ ;
    //     }
    //     cout << endl;
    // }

    char alpha = 'A';

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << alpha << " ";
            alpha++ ;
        }
        cout << endl;
    }
    return 0;
}