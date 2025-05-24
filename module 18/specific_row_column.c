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


    // print specific row

    // int row;
    // scanf("%d",&row);

    // for(int i =0; i<cols; i++){
    //     printf("%d ",arr[row][i]);
    // }


    // print specific column

    int col;
    scanf("%d",&col);
    for(int i =0; i<rows; i++){
        printf("%d ",arr[i][col]);
    }


    // for(int i =0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }


    return 0;
}