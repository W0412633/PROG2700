//
// Created by w0412633 on 1/16/2020.
//

#import <stdio.h>

int main () {
    int i = 256, j = 7;

    printf("Enter the value of i: ");
    scanf("%i", &i);
    printf("Enter the value of j: ");
    scanf("%i", &j);

    int next_multiple = i + j - i % j;

    printf("next multiple = %i\n", next_multiple);

    return 0;
}