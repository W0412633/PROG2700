//
// Created by w0412633 on 1/16/2020.
//

#import <stdio.h>

int main () {
    int num = 125;
    float flt = num;

    printf("num = %i, flt = %f\n", num, flt);

    float pi = 3.14159f;
    int not_pi;

    not_pi = (int)pi;

    printf("pi = %f, not_pi = %i\n", pi, not_pi);

    return 0;

}