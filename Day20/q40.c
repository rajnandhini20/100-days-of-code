/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 20 Question: 40
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to the 1's complement of a binary number and print it.
 */
#include <stdio.h>

int main() {
    long long n, digit, result = 0, place = 1;

    scanf("%lld", &n);

    while(n > 0) {
        digit = n % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;
        n = n / 10;
    }

    printf("%lld", result);

    return 0;
}

