/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 19 Question: 38
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the sum of digits of a number.
 */
#include <stdio.h>

int main() {
    int n, digit, sum = 0;

    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}
