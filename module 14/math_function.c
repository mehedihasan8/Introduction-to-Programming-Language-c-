#include<stdio.h>
#include<math.h>

int main(){
    int ans = ceill(2.3);
    int ans2 = floor(2.3);
    int ans3 = round(2.3);
    int ans4 = trunc(2.3);
    int and5 = square(2.3);
    int ans6 = pow(2,3);

    printf("%d\n",ans);
    printf("%d\n",ans2);
    printf("%d\n",ans3);
    printf("%d\n",ans4);
    return 0;
}