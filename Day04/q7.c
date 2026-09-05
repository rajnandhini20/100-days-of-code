/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 01 Question: 3
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap two numbers without using third variable.
 */
#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d", a, b);

    return 0;
}
