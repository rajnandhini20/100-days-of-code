/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 27 Question: 54
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *.
 */
#include <stdio.h>

int main() {
    int i, j;

    // Increasing stars
    for(i = 1; i <= 4; i++) {

        // Print spaces
        for(j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // Decreasing stars
    for(i = 3; i >= 1; i--) {

        // Print spaces
        for(j = 1; j <= 4 - i; j++) {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
