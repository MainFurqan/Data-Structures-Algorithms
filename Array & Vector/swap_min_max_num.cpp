#include <iostream>
using namespace std;

void swap_min_max(int arr[], int size) {

    if (size == 0)
    {
        cout << "Array is empty." << endl;
    }
    

    int min = INT_MAX;
    int max = INT_MIN;
    int min_index = 0;
    int max_index = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            min_index = i; 
        }
        
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    int k;
    k = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = k;
}

void print_arr(int arr[], int size) {
    for ( int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main() {
    int marks[] = {89, 423, 12, 34, 80, 7, 78};
    int size = 7;

    swap_min_max(marks, size);
    print_arr(marks, size);
    return 0;
}