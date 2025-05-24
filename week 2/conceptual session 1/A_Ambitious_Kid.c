#include<stdio.h>
#include<math.h>

int main(){
    int n, min_num = 100000+1;

    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        
        int num;
        scanf("%d",&num);

        if(num<0){
            num = abs(num);
        }

        if(num<min_num){
            min_num = num;
        }
    }

    printf("%d\n",min_num);
    return 0;
}