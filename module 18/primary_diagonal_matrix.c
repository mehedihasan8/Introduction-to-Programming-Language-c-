#include <stdio.h>

int main() {
    int rows, cols;
    
    // Reading matrix dimensions
    scanf("%d %d", &rows, &cols);

    // Check if the matrix is square
    if (rows != cols) {
        printf("not diagonal matrix\n");
        return 0;
    }

    // Declare the matrix
    int arr[rows][cols];

    // Read matrix elements and check for non-diagonal elements simultaneously
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            
            // If non-diagonal element is non-zero, exit immediately
            if (i != j && arr[i][j] != 0) {
                printf("not diagonal matrix\n");
                return 0;
            }
        }
    }

    // If no non-diagonal elements are found
    printf("This is a primary diagonal matrix\n");
    return 0;
}
