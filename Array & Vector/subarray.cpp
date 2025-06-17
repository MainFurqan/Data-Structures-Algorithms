#include <iostream>
using namespace std;

void subarray(int arr[], int size) {

    for (int sta = 0; sta < size; sta++)
    {   
        for (int end = sta; end < size; end++)
        {       
            cout << "[";
            for (int k = sta; k <= end; k++)
            {
                cout << arr[k];
                if(k < end) cout << ",";
            }
            cout << "]";
        }
        cout << endl;
    }
}


int main() {

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;

    subarray(arr, size);

    return 0;
}