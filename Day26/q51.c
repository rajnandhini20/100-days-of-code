/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day :  26 Question: 51
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345
*/
#include <stdio.h>

int main() {
    int i, j;

    for(i = 5; i >= 1; i--) {

        // Print spaces
        for(j = 1; j < i; j++) {
            printf(" ");
        }

        // Print numbers
        for(j = i; j <= 5; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
