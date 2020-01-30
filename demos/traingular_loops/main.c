//
// Created by w0412633 on 1/30/2020.
//

#include <stdio.h>

int main() {

    int triangular_number = 0;

    for (int i = 1; i <=5; i++) {
        triangular_number += i;
    }
    printf("The fifth triangular number is %i\n", triangular_number);

    return 0;
}