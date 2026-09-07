/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 20 Question: 39
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the product of odd digit numbers.
 */
#include <stdio.h>

int main() {
    int n, digit, product = 1;

    scanf("%d", &n);

    while(n > 0) {
        digit = n % 10;

        if(digit % 2 != 0) {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("%d", product);

    return 0;
}
