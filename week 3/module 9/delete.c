#include <stdio.h>

int main() {
   
    int n, idx;
    scanf("%d", &n);
    
    int arr[n];
    //taking input
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &idx);
    
    //deleting the element by shifting to right

    for(int i = idx; i<n-1; i++){
        arr[i] = arr[i+1];
    }

    //printing the array
    
    for(int i=0; i<n-1; i++){
        printf("%d ", arr[i]);
    }
    
    return 0;
}