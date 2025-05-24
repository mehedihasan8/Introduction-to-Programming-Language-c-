#include <stdio.h>

int main() {
    int rows, colms;
    
    scanf("%d %d", &rows, &colms);
    
    int arr[rows][colms];
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < colms; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int last_row = rows -1;
    
    for(int j = 0; j < colms; j++) {
        printf("%d ", arr[last_row][j]);
    }
    
    printf("\n");
    
    int last_col = colms -1;
    
    for(int i = 0; i < rows; i++) {
        printf("%d ", arr[i][last_col]);
    }
    
    printf("\n");

    return 0;
}
