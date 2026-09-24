/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 40 Question: 80
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q80: Multiply two matrices.
 */
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    int A[100][100], B[100][100], result[100][100];

    // Read dimensions of first matrix
    scanf("%d %d", &r1, &c1);

    // Read first matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Read dimensions of second matrix
    scanf("%d %d", &r2, &c2);

    // Read second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    // Initialize and multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < c1; k++) {
                result[i][j] = result[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
