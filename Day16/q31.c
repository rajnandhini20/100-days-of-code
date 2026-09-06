/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 16 Question: 31
 * Date : 06-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to take a number as input and print its equivalent binary representation.
 */
#include <stdio.h>

int main()
{
    int n, remainder;
    int binary[32];
    int i = 0;

    scanf("%d", &n);

    while (n > 0)
    {
        remainder = n % 2;
        binary[i] = remainder;
        n = n / 2;
        i++;
    }

    while (i > 0)
    {
        i--;
        printf("%d", binary[i]);
    }

    return 0;
}
