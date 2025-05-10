#include<stdio.h>

void printN(int n){
    printf("%d\n", n);
    
    if(n==1){
        return;
    }
    n--;
    printN(n);
}

int main(){
    int n;
    scanf("%d",&n);

    printN(n);

    return 0;
}