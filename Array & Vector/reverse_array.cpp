#include <iostream>
using namespace std;

void reverse_arr(int arr[], int size) {       // Time complexcity O(n)

    int k;

    for (int i = size-1, j = 0; j < i ; i--, j++)
    {
        k = arr[j];     
        arr[j] = arr[i];
        arr[i] = k;  
    }
}

void print_arr(int arr[], int size) {
    for ( int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int marks[] = {89, 4, 23, 11, 67, 45, 90};
    int size = 6;
    
    reverse_arr(marks, size);

    print_arr(marks, size);

    return 0;
}