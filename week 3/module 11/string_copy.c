#include <stdio.h>
#include <string.h>

int main() {
    char a[101], b[101];
    scanf("%s %s", &a, &b);
    
    int len = strlen(a);
    
    for(int i=0; i<len; i++){
        a[i] = b[i];
    }
    
    // build in function to copy a string to another string
    // function name is strcpy(destination, source)
    // strcpy(a, b)---> means copy b to a
    
    printf("A is %s\nB is %s\n", a, b);
   

    return 0;
}