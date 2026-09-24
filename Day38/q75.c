/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 38 Question: 75
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q75: Add two matrices.
 */
#include <stdio.h>

int main() {
    int rows, cols;
    int A[100][100], B[100][100], sum[100][100];

    scanf("%d %d", &rows, &cols);

    // Read first matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read second matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Add matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print result
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
