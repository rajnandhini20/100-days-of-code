/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 49 Question: 98
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q98: Print initials of a name with the surname displayed in full.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, start = 0, lastSpace = -1;

    scanf("%99[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            lastSpace = i;
        }
        i++;
    }

    i = 0;

    while (str[i] != '\0' && i < lastSpace) {
        if (i == 0 || str[i - 1] == ' ') {
            printf("%c.", str[i]);
        }
        i++;
    }

    if (lastSpace != -1) {
        printf(" %s", str + lastSpace + 1);
    } else {
        printf("%s", str);
    }

    return 0;
}
