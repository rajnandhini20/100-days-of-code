/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 05 Question: 12
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
 */
#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    if (n >= 0) {
        if (n == 0) {
            printf("Zero");
        } else {
            printf("Positive");
        }
    } else {
        printf("Negative");
    }

    return 0;
}
