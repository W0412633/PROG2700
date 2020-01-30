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
    while (num > 0) {
        digit = num %10;
        sum += digit;
        num /= 10;
    }
    printf("sum = %i\n", sum);
    
    return 0;
}