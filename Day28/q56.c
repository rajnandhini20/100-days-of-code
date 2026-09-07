/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 28 Question: 56
 * Date : 07-09-2026
 *
 * PROBLEM STATEMENT:
 * Q56: Read and print elements of a one-dimensional array.
 */
#include <stdio.h>

int main() {
    int n, i;
    int arr[100];

    scanf("%d", &n);

    // Read array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array elements
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
