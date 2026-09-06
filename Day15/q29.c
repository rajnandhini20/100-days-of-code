/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 15 Question: 29
 * Date : 06-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to convert calculate the factorial of a number.
 */
#include <stdio.h>

int main()
{
    int n, i;
    int factorial = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("%d", factorial);

    return 0;
}
