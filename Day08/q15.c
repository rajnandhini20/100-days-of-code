/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 08 Question: 15
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 */
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    }
    else {
        printf("Special character");
    }

    return 0;
}
