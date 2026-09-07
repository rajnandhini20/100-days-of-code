/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 29 Question: 57
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Q57: Find the sum of array elements.
 */
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];

    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for(i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("%d", sum);

    return 0;
}
