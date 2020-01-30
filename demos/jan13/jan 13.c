#include <stdio.h>
#include <stdint.h>
#include <float.h>
//
// Created by w0412633 on 1/13/2020.
//



int main() {

    short int snum = 0;             // 16-bit int
    unsigned short int usnum = 0;   // 16-bit unsigned int
    int num = 0;                    // 32-bit int
    unsigned int unum = 0;          // 32-bit unsigned int
    long int lnum = 0;              // 64-bit int
    char ch = 0;                    // 8-bit int
    unsigned char uch = 0;          // 8-bit unsigned int

    ch = 65 + 5;
    uch = 234;
    unum = 2147483648;

    //num = INT32_MAX;
    //num = INT32_MIN;

    printf("range %i to %i, ch = %i\n", INT8_MIN, INT8_MAX, ch);
    printf("range %i to %i, uch = %i\n", 0, UINT8_MAX, uch);
    printf("range %i to %i, snum = %i\n", INT16_MIN, INT16_MAX, snum);
    printf("range %i to %i, num = %i\n", INT32_MIN, INT32_MAX, num);
    printf("range %u to %u, unum = %u\n", 0, UINT32_MAX, unum);
    printf("range %lli to %lli, lnum = %li\n", INT64_MIN, INT64_MAX, lnum);

    float f = 0.0f;
    double d = 0.0;

    f = -32.452f;
    d = 2e57;

    printf("range %f to %f, f = %g\n", FLT_MIN, FLT_MAX, f);
    printf("range %lf to %lf, d = %g\n", DBL_MIN, DBL_MAX, d);

    return 0;

}