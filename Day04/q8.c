/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 01 Question: 3
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find and display the sum of the first n natural numbers.
 */
#include <stdio.h>

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum=%d", sum);

    return 0;
}
