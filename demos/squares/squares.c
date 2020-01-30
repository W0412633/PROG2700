//
// Created by w0412633 on 1/30/2020.
//

#include <stdio.h>

int main() {
    printf("  n   |  n^2\n");
    printf("------|-------\n");
    for (int n = 1; n <= 10; n++) {
        printf("%3i   |   %i\n", n, n*n);
    }

    return 0;
}