#include <stdio.h>


//here we are finding the min and max value in the array
//and then replacing the min with max and max with min

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    
    int min=arr[0], max = arr[0];
    
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min = arr[i];
        } else if(arr[i]>max ) {
            max = arr[i];
        }
    }
    
        
    for(int i=0; i<n; i++){
        if(arr[i]==min){
            arr[i] = max;
        } else if(arr[i]==max ) {
            arr[i]=min;
        }
    }
    
    
      for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
    

    return 0;
}