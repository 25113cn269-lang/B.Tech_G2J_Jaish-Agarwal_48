#include <stdio.h>

int main() {
    int m, n;
    int sum = 0;

    // Get the dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);

    // Diagonals are only valid for square matrices (m == n)
    if (m != n) {
        printf("Error: A diagonal can only be found in a square matrix (rows must equal columns).\n");
        return 1;
    }

    int matrix[m][n];

    // Read elements into the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the diagonal elements
    // The main diagonal elements are present where row index (i) == column index (j)
    for (int i = 0; i < m; i++) {
        sum += matrix[i][i];
    }

    // Display the result
    printf("\nThe sum of the diagonal elements is: %d\n", sum);

    return 0;
}
 