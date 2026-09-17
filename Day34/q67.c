/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 34 Question: 67
 * Date : 18-09-2026
 *
 * PROBLEM STATEMENT:
 * Q67: Insert an element in an array at a given position.
 */
#include <stdio.h>

int main() {
    int a[100], n, i, pos, value;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &value);

    for (i = n; i >= pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos - 1] = value;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
