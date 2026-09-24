/*
 * Name : Rajnandhini
 * Roll : 590035256
 * Day : 40 Question: 79
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Q79: Perform diagonal traversal of a matrix.
 */
#include <stdio.h>

int main() {
    int n, m;
    int matrix[100][100];

    scanf("%d %d", &n, &m);

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < n + m - 1; d++) {

        if (d % 2 == 0) {
            // Move upward
            int row = (d < n) ? d : n - 1;
            int col = d - row;

            while (row >= 0 && col < m) {
                printf("%d ", matrix[row][col]);
                row--;
                col++;
            }
        } else {
            // Move downward
            int col = (d < m) ? d : m - 1;
            int row = d - col;

            while (col >= 0 && row < n) {
                printf("%d ", matrix[row][col]);
                row++;
                col--;
            }
        }
    }

    return 0;
}
