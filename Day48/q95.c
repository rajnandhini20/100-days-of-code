/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 48 Question: 95
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q95: Check if one string is a rotation of another.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    int i, j = 0, len1, len2, found = 0;

    scanf("%99s", str1);
    scanf("%99s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not rotation");
        return 0;
    }

    for (i = 0; i < len1; i++) {
        temp[j++] = str1[i];
    }

    for (i = 0; i < len1; i++) {
        temp[j++] = str1[i];
    }

    temp[j] = '\0';

    if (strstr(temp, str2) != NULL) {
        found = 1;
    }

    if (found == 1) {
        printf("Rotation");
    } else {
        printf("Not rotation");
    }

    return 0;
}
