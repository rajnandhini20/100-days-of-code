/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 16 Question: 32
 * Date : 06-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is a palindrome.
 */
#include <stdio.h>

int main()
{
    int n, original, reverse = 0, digit;

    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if (original == reverse)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }

    return 0;
}
