/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 06 Question: 11
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input an integer and check whether it is even or add using if-else.
 */
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is even", n);
    } else {
        printf("%d is odd", n);
    }

    return 0;
}
