#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000001];
    
    fgets(str, sizeof(str), stdin);
    int i =0;
    while(str[i] != '\\')
    {
        printf("%c", str[i]);
        i++;
    }

    return 0;
}