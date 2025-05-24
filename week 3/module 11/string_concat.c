#include<stdio.h>
#include<string.h>

int main(){
    char a[101], b[101];
    scanf("%s %s", &a, &b);

    // build in function to concat a string to another string
    // function name is strcat(destination, source)
    // strcat(a, b)---> means copy b to a
    
    int lena = strlen(a);
    int lenb = strlen(b);

    for(int i=0; i<=lenb; i++){
        a[lena+i] = b[i];
    }

    printf("%s %s", a, b);
    return 0;
}