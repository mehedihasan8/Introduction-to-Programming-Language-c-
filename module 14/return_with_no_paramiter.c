#include<stdio.h>

int sumOfTwoNumbers(){
    int x,y;
    scanf("%d %d",&x,&y);
    return x+y;
}

int main(){
    printf("%d", sumOfTwoNumbers());
    return 0;
}