#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr1[n];
    
    for(int i =0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    
    
    int m;
    scanf("%d", &m);
    
    int arr2[m];
    
    for(int i =0; i<n; i++){
        scanf("%d", &arr2[i]);
    }
    
    
    int copy_arr[n+m];
    
    for(int i=0; i<n; i++){
        copy_arr[i] = arr1[i];
    }

    for(int i=0; i<m; i++){
        copy_arr[i+n] = arr2[i];
   }
   
    
     for(int i=0; i<(n+m); i++){
        printf("%d ", copy_arr[i]);
    }

    
    

    return 0;
}