#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s", &str);
    int len = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    // while (str[len] != '\0')
    // {
    //     len++;
    // }
    
    printf("Length of string is %d", len);
    return 0;
}