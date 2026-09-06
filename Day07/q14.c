/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 07 Question: 14
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input a character and check whether it is a vowel or consonant using if–else..
 */
#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("Vowel");
    } else {
        printf("Consonant");
    }

    return 0;
}
