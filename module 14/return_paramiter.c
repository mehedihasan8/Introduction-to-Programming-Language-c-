#include<stdio.h>

int numberDouble(int x){
    return x*2;
}

int main(){
    int x;
    scanf("%d",&x);

    printf("%d", numberDouble(x));

    return 0;
}