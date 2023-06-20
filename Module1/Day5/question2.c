/*2. Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.*/

#include <stdio.h>
struct Complex {
    double real;
    double imaginary;
};
void readComplex(struct Complex* num) {
    printf("Enter the real part: ");
    scanf("%lf", &num->real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &num->imaginary);
}
void writeComplex(struct Complex num) {
    printf("Complex number: %.2f + %.2fi\n", num.real, num.imaginary);
}
struct Complex addComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    
    return result;
}
struct Complex multiplyComplex(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    result.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    
    return result;
}
int main() {
    struct Complex num1, num2, sum, product;
    printf("Reading the first complex number:\n");
    readComplex(&num1);
    printf("\nReading the second complex number:\n");
    readComplex(&num2);
    printf("\n");
    printf("First complex number:\n");
    writeComplex(num1);
    printf("Second complex number:\n");
    writeComplex(num2);
    sum = addComplex(num1, num2);
    printf("\nSum of the complex numbers:\n");
    writeComplex(sum);
    product = multiplyComplex(num1, num2);
    printf("Product of the complex numbers:\n");
    writeComplex(product);
    return 0;
}