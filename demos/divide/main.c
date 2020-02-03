//
// Created by w0412633 on 2/3/2020.
//

#include <stdio.h>

int main() {

    float num1, num2;

    printf("Enter a dividend: ");
    scanf("%f", &num1);

    printf("Enter a divisor: ");
    scanf("%f", &num2);

    if (num2 == 0.0f) {
        printf("Divide by zero error\n");
    } else {
        printf("%f / %f = %.3f\n", num1, num2, num1 / num2);
    }

    return 0;
}