#include<stdio.h>
#include<string.h>

int main(){
    char a [100001];
    fgets(a, sizeof(a), stdin);

    for(int i =0; i<strlen(a); i++){
        if(a[i]<= 'a' && a[i] <= 'z'){
            printf("%c", (a[i]+32));
        }
    }
    return 0;
}