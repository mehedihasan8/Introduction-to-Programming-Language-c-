#include <stdio.h>

int main() {
    int n, cou2=0, cou3=0;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++){
        if(arr[i] % 2 ==0){
            cou2++;
        } else if(arr[i] % 3 ==0){
            cou3++;
        } else if(arr[i] % 2 == 0 && arr[i] % 3 == 0){
            cou2;
        }
    }
    
    printf("%d %d", cou2, cou3);

    return 0;
}