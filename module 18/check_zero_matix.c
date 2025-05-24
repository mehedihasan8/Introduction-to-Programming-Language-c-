#include<stdio.h>
int main(){
    int rows,cols;
    
    scanf("%d %d",&rows,&cols);

    int arr[rows][cols];

    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d",&arr[i][j]);
        }
    }


    int total_value = rows*cols;

    int count = 0;

    for(int i =0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == 0){
                count++;
            }
        }
    }

    if(count == total_value){
        printf("zero matrix\n");
    } else{
        printf("not zero matrix\n");
    }

    return 0;
}