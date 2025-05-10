#include <stdio.h>

void printArray(int arr[], int n, int i) {
    // Correct base condition
    if (i >= n) {
        return;
    }
    
    // Print the current element
    printf("%d\n", arr[i]);
    
    // Call the function with the incremented index
    printArray(arr, n, i + 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Start from the 0th index
    printArray(arr, n, 0);

    return 0;
}
