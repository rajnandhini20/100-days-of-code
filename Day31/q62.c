/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 31 Question: 62
 * Date : 16-09-2026
 *
 * PROBLEM STATEMENT:
 * Q62: Reverse an array without taking extra space.
 */
#include <stdio.h>

int main() {
    int n, i, temp;

    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse the array
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    // Print reversed array
    for (i = 0; i < n; i++) {
        printf("%d", arr[i]);

        if (i < n - 1)
            printf(" ");
    }

    return 0;
}
