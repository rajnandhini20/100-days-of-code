/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 43 Question: 86
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q86: Check if a string is a palindrome.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, j, flag = 1;

    scanf("%99s", str);

    j = strlen(str) - 1;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}
