/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 18 Question: 36
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find HCF of two numbers.
 */
#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;

    scanf("%d %d", &a, &b);

    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    printf("%d", hcf);

    return 0;
}
