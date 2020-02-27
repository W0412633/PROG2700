//
// Created by w0412633 on 2/24/2020.
//

#include <stdio.h>

void multiply_by_two(int rows, int cols, int nums[][cols]) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            nums[r][c] *= 2;
        }
    }
}

void multiply_by_two_ptr(int rows, int cols, int nums[][cols]) {
    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            *(nums + r * rows + c) *= 2;
        }
    }
}

int main() {
    int nums[2][5] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10}
    };

    multiply_by_two(2,5, nums);
    multiply_by_two_ptr(&nums[0][0], 2, 5);

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 5; c++) {
            printf("%i, ", nums [r][c]);
        }
        printf("\n");
    }

    return 0;
}