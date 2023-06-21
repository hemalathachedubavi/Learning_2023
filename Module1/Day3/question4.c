/*5. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5*/

#include <stdio.h>
void findSmallestLargestDigits(int numbers[], int size) {
    int i, j;
    int smallestDigit, largestDigit;
    int isSingleDigit;
    for (i = 0; i < size; i++) {
        // Check if the number is a single digit
        isSingleDigit = 1;
        int num = numbers[i];
        while (num > 9) {
            num /= 10;
            isSingleDigit = 0;
        }
        if (isSingleDigit) {
            printf("%d - Not Valid\n", numbers[i]);
        } else {
            smallestDigit = 9;
            largestDigit = 0;
            while (numbers[i] != 0) {
                int digit = numbers[i] % 10;
                if (digit < smallestDigit) {
                    smallestDigit = digit;
                }
                if (digit > largestDigit) {
                    largestDigit = digit;
                }
                numbers[i] /= 10;
            }
            printf("Smallest Digit of %d: %d\n", numbers[i], smallestDigit);
            printf("Largest Digit of %d: %d\n", numbers[i], largestDigit);
        }
    }
}
int main() {
    int numbers[] = {8, 156, 123450};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    findSmallestLargestDigits(numbers, size);
    return 0;
}