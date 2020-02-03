//
// Created by w0412633 on 1/30/2020.
//

#include <stdio.h>

int main() {

    int num = 0;
    printf("Enter an integer: ");
    scanf("%i", &num);

    int digit = 0;
    int sum = 0;
    int num_digits = 0;
    int temp = num;
    while (temp > 0) {
        digit = temp %10;

        printf("%i ", digit);
        sum += digit;
        temp /= 10;

        num_digits++;
    }
    printf(" = %i\n", sum);

    int reversed_num = 0;

    for (int place_holder = num_digits; place_holder > 0; place_holder--) {
        digit = num % 10;
        reversed_num += digit;
        if (place_holder > 1) {
        reversed_num *= 10;
        }
        num /= 10;
    }
    printf("reversed num = %i\n",reversed_num);

    while (reversed_num > 0) {
        digit = reversed_num % 10;
        printf("%i ", digit);
        reversed_num /= 10;
    }
    printf(" = %i\n", sum);
    return 0;
}