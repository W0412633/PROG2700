//
// Created by w0412633 on 2/24/2020.
//

#include <stdio.h>

void add_one_to_array(int number_list[], int len) {
    for (int i = 0; i < len; i++) {
        number_list[i]++;
    }
}

int add_one_to_element(int *num) {
    return ++(*num);
}
int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int len = sizeof(nums) / sizeof(int);
    add_one_to_array(nums, len);
    nums[0] = add_one_to_element(&nums[0]);
    for(int i = 0; i < sizeof(nums)/sizeof(int); i++) {
        printf("%i ", nums[i]);
    }
    printf("\n");
    return 0;
}