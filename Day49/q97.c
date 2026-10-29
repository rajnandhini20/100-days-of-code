/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 49 Question: 97
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q97: Print the initials of a name.
 */

#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    scanf("%99[^\n]", str);

    if (str[0] != ' ') {
        printf("%c.", str[0]);
    }

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != ' ' &&
            str[i + 1] != '\0') {
            printf("%c.", str[i + 1]);
        }
        i++;
    }

    return 0;
}
