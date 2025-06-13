#include <iostream>
using namespace std;

// Using Bitwise operator
void IsPowTwo_Bitwise(int x) {
    if (x <= 0)
    {
        cout << x << " is not power of 2." << endl;
    }
    
    int n = 1;
    int h=1;
    bool ArePowTwo = false;

    for (int i = 1; h <= x; i++)
    {
        h = (n << i);
        
        if (h == x)
        {
            ArePowTwo = true;
            break;
        }
    }
    
    if (ArePowTwo)
    {
        cout << x << " is power of 2." << endl;
    }
    else {
        cout << x << " is not power of 2." << endl;
    }
}

// With Arithmetical Operator
void IsPowTwo_Arithmetic(int n) {
    int m = 2;
    while (m < n)
    {
        m *= 2;
    }
    
    if (m == n)
    {
        cout << n << " is power of 2." << endl;
    }
    else {
        cout << n << " is not power of 2." << endl;
    }
}

int main() {
    int m;
    cout << "Enter any Number: ";
    cin >> m;

    IsPowTwo_Bitwise(m);  // Calling the bitwise function

    IsPowTwo_Arithmetic(m);  // Calling the Arithmetical function

    return 0;
}