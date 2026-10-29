/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 47 Question: 93
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q93: Check if two strings are anagrams of each other.
 */

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, count[256] = {0};

    scanf("%99s", str1);
    scanf("%99s", str2);

    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}
