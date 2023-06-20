/*3. Reverse the array*/


#include <stdio.h>

int main() {
    int arr[] = {64,84,20,36,12,90,72,10,45,56};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int first = 0;
    int last = size - 1;

    while (first < last) {
       
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }

    printf("Reversed Array is : ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}