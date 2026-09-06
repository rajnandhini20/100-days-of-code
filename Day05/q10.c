/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 05 Question: 10
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input time in second and convert it to hours:minute::second formats.
 */
#include <stdio.h>

int main() {
    int seconds, hours, minutes, sec;

    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    sec = seconds % 60;

    printf("%d:%d:%d", hours, minutes, sec);

    return 0;
}
