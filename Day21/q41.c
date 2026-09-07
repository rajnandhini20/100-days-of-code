/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 21 Question: 41
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap the first and last digit of a number.
 */
#include <stdio.h>

int main() {
    int n, first, last, digits, power, middle, result;

    scanf("%d", &n);

    last = n % 10;

    power = 1;
    digits = n;

    while(digits >= 10) {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    middle = (n % power) / 10;

    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}
