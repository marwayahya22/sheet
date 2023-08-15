#include <stdio.h>

typedef struct complex {             //declertion struct
    float real;
    float imag;
} complex;

complex add(complex n1, complex n2); // declartion function

int main() {
    complex n1, n2, result;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);
