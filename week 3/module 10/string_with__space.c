#include<stdio.h>
int main()
{
    char str[100];
    // gets(str) -> just take one line input;
    
    //fgets(str, sizeof(str), stdin) -> take multi line input and get enter as a input
    fgets(str, sizeof(str), stdin);
    printf("%s",str);
    return 0;
}