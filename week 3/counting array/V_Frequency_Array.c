#include <stdio.h>

int main() {
    int n, freSize;
    scanf("%d %d", &n, &freSize);
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int fre[freSize] = {0};
    
    for(int i=1; i<=freSize; i++){
        fre[arr[i+1]]++;
    }
    
    for(int i=0; i<n; i++){
        printf("%d\n", &arr[i+1]);
    }
    
    
    return 0;
}