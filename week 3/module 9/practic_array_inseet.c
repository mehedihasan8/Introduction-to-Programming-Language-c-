#include <stdio.h>

int main() {
    int n, idx, val;
    scanf("%d", &n);
    
    int arr[n+1];
    
    //taking input

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    scanf("%d %d", &idx, &val);

    //here we are doing insertion, by shifting the elements
    
    for(int i=n; i>=idx+1; i--){
        arr[i] = arr[i-1];
    }
    
    //inserting the value

    arr[idx] = val;
    
    //printing the array

    for(int i=0; i<=n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}