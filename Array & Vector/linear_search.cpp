#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target) {

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)   // Found
        {
            return i;
        }
    }
    return -1;
}

int main() {
    int marks[] = {55, 22, 8, 90, 29, 90};
    int size = 6;
    int target = 900;

    cout << linear_search(marks, size, target) << endl;    // Time Complexcity of Linear search O(n)
    return 0;
}