/*5. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5*/

#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallest = 9;
    int largest = 0;

    for (int i = 0; i < n; i++) {
        int num = numbers[i];

        while (num > 0) {
            int digit = num % 10;
            if (digit < smallest)
                smallest = digit;
            if (digit > largest)
                largest = digit;
            num /= 10;
        }
    }

    if (smallest == 9 && largest == 0)
        printf("Not Valid\n");
    else
        printf("Smallest digit: %d\nLargest digit: %d\n", smallest, largest);
}

int main() {
    int n = 3;
    int numbers[] = {8, 156, 123450};

    findSmallestLargestDigits(n, numbers);

    return 0;
}



