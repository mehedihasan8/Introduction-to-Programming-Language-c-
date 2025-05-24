#include <stdio.h>

int main() {
    int rows, cols;
    
    // Read matrix dimensions
    scanf("%d %d", &rows, &cols);

    // Check if the matrix is square
    if (rows != cols) {
        printf("not secondary diagonal matrix\n");
        return 0;
    }

    int n = rows;
    int arr[n][n];

    // Read the matrix and validate it as secondary diagonal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            
            // Check if this is a non-secondary diagonal element
            if (i + j != n - 1 && arr[i][j] != 0) {
                printf("not secondary diagonal matrix\n");
                return 0;
            }
        }
    }

    // If no non-diagonal elements found
    printf("This is a secondary diagonal matrix\n");
    return 0;
}
