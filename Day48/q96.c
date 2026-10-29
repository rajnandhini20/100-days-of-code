/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 48 Question: 96
 * Date : 29-10-2026
 *
 * PROBLEM STATEMENT:
 * Q96: Reverse each word in a sentence without changing the word order.
 */

#include <stdio.h>

int main() {
    char str[200], temp;
    int i = 0, start = 0, end;

    scanf("%199[^\n]", str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }

            start = i + 1;
        }

        if (str[i] == '\0') {
            break;
        }

        i++;
    }

    printf("%s\n", str);

    return 0;
}
