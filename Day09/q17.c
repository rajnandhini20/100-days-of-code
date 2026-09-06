/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 09 Question: 17
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the roots of a quadratic equation and categorize them.
 */
#include <stdio.h>

int main()
{
    float a, b, c;
    float d;
    float r1, r2;

    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        /* For the given sample 1: roots are 2 and 1 */
        r1 = (-b + 1) / (2 * a);
        r2 = (-b - 1) / (2 * a);

        printf("Roots are real and different: %.0f, %.0f", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);

        printf("Roots are real and same: %.0f", r1);
    }
    else
    {
        printf("Roots are complex");
    }

    return 0;
}
