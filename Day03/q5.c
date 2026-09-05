/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 01 Question: 3
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to convert tempreature from celcius to fahrenheite.
 */
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Fahrenheit=%.0f", fahrenheit);

    return 0;
}
