/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 01 Question: 3
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap two numbers using a third variable.
 */
#include <stdio.h>

int main() {
    int a, b, temp;

    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swap: %d %d", a, b);

    return 0;
}
