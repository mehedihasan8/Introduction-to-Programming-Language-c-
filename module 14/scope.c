#include<stdio.h>

// when defining a variable outside a function, it is called global variable

int b = 8;


int main(){
    
    // when defining a variable inside a function, it is called local variable
    int x = 10;
    int y = 20;
    int z = x+y;
    printf("%d",z);

    return 0;
}