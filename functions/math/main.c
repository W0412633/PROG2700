//
// Created by w0412633 on 2/24/2020.
//
#include <stdio.h>

int fat_num = 10;

int absolute_value(int num) {
    if (num < 0) num *= -1;
    return num;
}

int main() {
    printf("Enter a number: ");
    int user_num;
    scanf("%i", &user_num);
    printf("%i", absolute_value(user_num));

    return 0;
}
