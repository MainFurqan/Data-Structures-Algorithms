#include <iostream> 
using namespace std;

void unique_values(int arr[], int size) {

    for (int i = 0; i < size; i++)
    {
        int count = 0;

        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }   
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }   
}

int main() {
    int age[] = {90, 23, 90, 90, 12, 12, 56, 1, 0};
    int size = 9;

    unique_values(age, size);

    return 0;
}