/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 37 Question: 74
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q74: Find the transpose of a matrix.
 */
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];

    scanf("%d %d", &rows, &cols);

    // Read matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print transpose
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
