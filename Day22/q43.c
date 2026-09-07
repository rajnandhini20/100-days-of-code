/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 22 Question: 43
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is a strong number.
 */
#include <stdio.h>

int main() {
    int n, temp, digit, i, fact, sum = 0;

    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        digit = temp % 10;

        fact = 1;
        for(i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if(sum == n)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}
