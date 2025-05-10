#include<stdio.h>

void printN(int i, int n){
    printf("%d\n", i);
    
    if(i==n){
        return;
    }
    i++;
    printN(i, n);
}

int main(){
    int n;
    scanf("%d",&n);
    int i =1;

    printN(i, n);

    return 0;
}