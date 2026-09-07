/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 26 Question: 52
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
 */
#include <stdio.h>

int main() {
    int i, j;

    // 1 star
    printf("*\n\n");

    // 3 stars
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }

    printf("\n");

    // 5 stars
    for(i = 1; i <= 5; i++) {
        printf("*\n");
    }

    printf("\n");

    // 3 stars
    for(i = 1; i <= 3; i++) {
        printf("*\n");
    }

    printf("\n");

    // 1 star
    printf("*\n");

    return 0;
}
