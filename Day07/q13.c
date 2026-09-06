/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 07 Question: 13
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:input a year and check whether it is a leap year or not using conditional statements.
 * Write a program to .
 */
#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("Leap year");
    }
    else if (year % 100 == 0) {
        printf("Not a leap year");
    }
    else if (year % 4 == 0) {
        printf("Leap year");
    }
    else {
        printf("Not a leap year");
    }

    return 0;
}
