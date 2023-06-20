/*5. Difference between even indexed and odd indexed*/


#include <stdio.h>

int main() {
    int arr[] = {64,84,21,36,17,90,77,10,48,55};
    int size = sizeof(arr) / sizeof(arr[0]);

    int evensum = 0;
    int oddsum = 0;

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            evensum += arr[i];
        } else {
            oddsum += arr[i];
        }
    }

    int difference = evensum - oddsum;

    printf("Sum of even-indexed elements is : %d\n", evensum);
    printf("Sum of odd-indexed elements is : %d\n", oddsum);
    printf("Difference is : %d\n", difference);

    return 0;
}