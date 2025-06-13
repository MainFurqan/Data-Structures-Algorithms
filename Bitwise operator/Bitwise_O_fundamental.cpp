#include <iostream>
using namespace std;

int main() { 
    cout << (10 & 30) << endl;      // Bitwise '&' or 'AND' operator is similar with Logical AND operator

    cout << (10 | 30) << endl;      // Bitwise '|' or 'OR' operator is similar with Logical OR operator
    
    cout << (10 ^ 30) << endl;      // the concept of Bitwise '^' or 'XOR' operator is similar with concept of Logical XOR operator
    
    // Left shift operator 
    cout << (40 << 4) << endl;

    // Right shift operator 
    cout << (40 >> 4) << endl;

    return 0;
}