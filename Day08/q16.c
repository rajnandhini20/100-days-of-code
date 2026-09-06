/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 08 Question: 16
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input three numbers and find the largest among them using if–else.
 */
#include <stdio.h>

int main() {
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("Largest is %d", a);
    }
    else if (b >= a && b >= c) {
        printf("Largest is %d", b);
    }
    else {
        printf("Largest is %d", c);
    }

    return 0;
}
