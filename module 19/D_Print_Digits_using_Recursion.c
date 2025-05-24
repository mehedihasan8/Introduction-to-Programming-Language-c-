#include<stdio.h>

void printDigits(int n){
    
        if(n==0){
            return;
        }
        
        printDigits(n/10);

        int last = n % 10;
        
        printf("%d ", last);
}

int main(){
    
    int t;
    scanf("%d", &t);
    
    while(t--){
        int n;
        scanf("%d", &n);
        if(n==0){
            printf("0");
        }
        printDigits(n);
        printf("\n");
    }
    
    return 0;
}