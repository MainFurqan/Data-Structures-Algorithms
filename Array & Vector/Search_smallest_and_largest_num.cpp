#include <iostream>
using namespace std;


// Search the smallest and largest Value from Array

void small_large_value(int x[], int size_x) {
    
    if (size_x == 0)
    {
        cout << "Array is empty." << endl;
    }
    

    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size_x; i++)
    {
        if (x[i] < smallest)
        {
            smallest = x[i];
        }
        else if (x[i] > largest)
        {
            largest = x[i];
        }
    }
    
    cout << "Smallest Value: " << smallest << endl;
    cout << "Largest Value: " << largest << endl;
}

// Search the smallest and largest Value_index from Array 

void small_large_value_index(int y[], int size_y) {

    if (size_y == 0)
    {
        cout << "Array is empty." << endl;
        return;
    }
    

    int smallest = 0;
    int largest = 0;

    for (int i = 0; i < size_y; i++)
    {
        if (y[i] < y[smallest])
        {
            smallest = i;
        }
        
        if (y[i] > y[largest])
        {
            largest = i;
        }
    }
    
    cout << "Smallest Value Index: " << smallest << endl;
    cout << "Largest Value Index: " << largest << endl;
}

int main() {

    int age[] = {5, 9, 90, 23, 3, 67, 89, 1, 100};
    int size = sizeof(age) / sizeof(age[0]);

    small_large_value(age, size);   // Search the smallest and largest Age from given Array

    small_large_value_index(age, size);   // Search the smallest and largest Age index from given Array
    return 0;
}