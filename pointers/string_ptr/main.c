//
// Created by w0412633 on 2/27/2020.
//

#include <stdio.h>
#include <string.h>

int main () {
    char str[] = "Hello World!";
    char str2[] = {'H','e','l','l','o','\0'};
    char *str3 = "Hello Again!";

    printf("str = %s, str = %p\n", str, str);
    printf("str2 = %s, str2 = %p\n", str2, str2);
    printf("str3 = %s, str3 = %p\n", str3, str3);

    for (int i=0; i<strlen(str); i++) {
        printf("%c", str[i]);
    }
    printf("\n");

    for (int i=0; i<strlen(str3); i++) {
        printf("%c", *(str3 + i));
    }

    printf("\n");

    char buffer[256];

    char str4[] = "W-thought";

    strncpy(buffer, str, 256);

    printf("%s\n", str4);

    char *s1 = "String 1";
    char *s2 = "String 1";

    if (strcmp(s1, s2) == 0) {
        printf("EQUAL!\n");
    } else {
        printf("NOT equal.\n");
    }

    char *long_str = "This is a story about a man named Sam.";
    char *buf_ptr = buffer;

    for (int i=0; i<strlen(long_str); i++) {
        printf("%c ", long_str[i]);
        *buf_ptr = long_str[i];
        if (long_str[i] == ' ') {
            *buf_ptr = '\0';
            buf_ptr = buffer;
            printf("buffer: %s\n", buf_ptr);
            printf("\n");
        } else {
            buf_ptr++;
        }
    }
    printf("\n");

    return 0;
}