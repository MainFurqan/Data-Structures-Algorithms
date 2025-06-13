#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any Number: " ;
    cin >> n;

    for (int i = 0; i < n; i++)
    {   
        // for spaces
        for (int j = 0; j < i; j++)
        {
            cout << " " ;
        }
        
        // for num
        for (int k = 0; k < n - i; k++)
        {
            cout << (i + 1) ;
        }
        cout << endl;
    }

    cout << endl;

    // Character version

    for (int i = 0; i < n; i++)
    {   
        char alpha = 'A';
        // for spaces
        for (int j = 0; j < i; j++)
        {
            cout << " " ;
        }
        
        // for num
        for (int k = 0; k < n - i; k++)
        {
            char update_alpha = alpha + i;
            cout << update_alpha ;
        }
        cout << endl;
    }

    return 0;    
}