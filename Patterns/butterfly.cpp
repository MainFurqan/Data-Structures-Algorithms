#include <iostream>
using namespace std;

int main() {
    int n = 10;

    int k=2;

    // Top half
    for(int i = 0; i < n ; i++) {
        for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
    
        for (int j = 0; j < 2*n-k; j++)
        {
            cout << " ";
        }
        k = k+2;
        
        for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }

        cout << endl;   
        }

    // Bottom half

    int m=2;
    for(int i = 0; i < n ; i++) {
        for (int j = 0; j < n-i; j++)
            {
                cout << "*";
            }

        if (i != 0)
        {
            for (int j = 0; j < m; j++)
            {
                cout << " ";
            }
            m = m+2;
        }
        
        
        for (int j = 0; j < n-i; j++)
            {
                cout << "*";
            }

        cout << endl;   
        }
}
