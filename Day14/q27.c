/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 14 Question: 27
 * Date : 06-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the sum of the first n odd numbers.
 */
#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + (2 * i - 1);
    }

    printf("%d", sum);

    return 0;
}
