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


    // check row matrix

    // if(rows == 1){
    //     printf("row matrix\n");
    // } else{
    //     printf("not row matrix\n");
    // }

    // check column matrix

    // if(cols == 1){
    //     printf("column matrix\n");
    // } else{
    //     printf("not column matrix\n");
    // }

    // check square matrix

    if(rows == cols){
        printf("square matrix\n");
    } else{
        printf("not square matrix\n");
    }

}