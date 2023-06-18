/*4. Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators*/

#include <stdio.h>
int findLargestNumber(int num) {
    int max = 0;
    int divisor = 1;

    while (divisor <= 1000) {
        int tempNum = (num / (divisor * 10)) * divisor + (num % divisor);

        if (tempNum > max) {
            max = tempNum;
        }

        divisor *= 10;
    }

    return max;
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumber(number);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);

    return 0;
}