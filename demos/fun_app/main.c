//
// Created by w0412633 on 2/3/2020.
//

#include <stdio.h>

int main() {
    int dividend = 0;
    int divisor = 0;
    int test = 0;
    printf("Enter dividend: ");
    scanf("%i", &dividend);
    printf("Enter divisor: ");
    scanf("%i", &divisor);

    test = dividend % divisor;

    if (test == 0) {
        printf("Number is evenly divisible!");
    } else {
        printf("Number is not evenly divisible :(");
    }

    return 0;
}