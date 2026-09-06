/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 05 Question: 9
 * Date : 06-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate simple and compound interest for given principal,rate, and time.
 */
#include <stdio.h>

int main() {
    float p, r, t;
    float si, ci, amount;
    int i;

    scanf("%f %f %f", &p, &r, &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest
    amount = p;

    for (i = 1; i <= t; i++) {
        amount = amount + (amount * r / 100);
    }

    ci = amount - p;

    printf("Simple Interest=%.0f, Compound Interest=%.2f", si, ci);

    return 0;
}
