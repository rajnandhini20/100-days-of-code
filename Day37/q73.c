/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 37 Question: 73
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q73: Find the sum of each row of a matrix and store it in an array.
 */
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int rowSum[100];

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find sum of each row
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (int j = 0; j < cols; j++) {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    // Print row sums
    for (int i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}
