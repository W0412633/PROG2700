//
// Created by w0412633 on 2/24/2020.
//

#include <stdio.h>

int increase_val() {
    static int num = 0;
    return ++num;
}

int main() {

    printf("Enter a number: \n");
    //scanf("%i", &num);
    for (int i=0; i<10; i++) {
        printf("%i\n", increase_val());
    }
    return 0;
}