#include <iostream> 
using namespace std;

bool Is_duplicate(int arr[], int size, int value) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            return true;
        }
    }
    return false;
}

void intersection(int arr_1[], int size_1, int arr_2[], int size_2) {


    int intersection[50];
    int count = 0;

    for (int i = 0; i < size_1; i++)
    {   
        for (int j = 0; j < size_2; j++)
        {
            if (arr_1[i] == arr_2[j])
            {
                if (!Is_duplicate(intersection, count, arr_1[i]))
                {
                    intersection[count] = arr_1[i];
                    count++;
                }
                break;
            }
        }
    }

    
    for ( int i = 0; i < count; i++)
    {
        cout << intersection[i] << " ";
    }
}

int main() {
    
    int arr_1[] = {90, 34, 6, 2, 45, 12, 97, 34, 1};
    int size_1 = 9;
    
    int arr_2[] = {1, 34, 99, 33, 96, 22, 45, 112, 90, 45};
    int size_2 = 10;

    intersection(arr_1, size_1, arr_2, size_2);

    return 0;
}