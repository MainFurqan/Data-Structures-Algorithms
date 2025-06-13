#include <iostream>
using namespace std;

// Sum of whole array
int sum_arr(int arr[], int size) {
    int sum = 0;
    for ( int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    return sum;
}

// Product of whole array 
int product_arr(int arr[], int size) {
    int product = 1;
    for ( int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    
    return product;
}

int main() {
    int bill[] = {4, 5, 3, 1, 4, 6, 9};
    int size = 7;

    cout << sum_arr(bill, size) << endl;
    cout << product_arr(bill, size) << endl;

    return 0;
}