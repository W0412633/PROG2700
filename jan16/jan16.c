#include <stdio.h>

int main() {

    float celsius;
    float fahrenheit;

    fahrenheit = 20.0f;

    celsius = (fahrenheit - 32.0f) / 1.8f;

    printf("%fF = %fC\n", fahrenheit, celsius);

    return 0;

}