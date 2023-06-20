/*2. Min and max of 1D array*/


#include<stdio.h>

void MinandMax(int arr[], int size, int* min, int* max) {
    
    *min = arr[0];
    *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min)
            *min = arr[i];
        if (arr[i] > *max)
            *max = arr[i];
    }
}

int main() {
    int arr[] = {64,84,20,36,12,90,72,10,45,56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;
    MinandMax(arr, size, &min, &max);

    printf("Minimum in the array is : %d\n", min);
    printf("Maximum in the array is : %d\n", max);

    return 0;
}