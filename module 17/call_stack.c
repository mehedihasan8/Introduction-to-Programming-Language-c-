#include<stdio.h>

void gello(){
    printf("gello");
}

void hello(){
    printf("hello");
    gello();
}

int main(){
    printf("test");
    hello();
    return 0;
}