/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 17 Question: 34
 * Date : 06-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is prime.
 */
#include <stdio.h>

int main()
{
    int n, i;
    int prime = 1;

    scanf("%d", &n);

    if (n <= 1)
    {
        prime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }
    }

    if (prime == 1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}
