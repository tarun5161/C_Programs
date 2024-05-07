#include<stdio.h>

int main(){
    int row,col,numRows;
    printf("Enter the number of rows: ");
    scanf("%d",&numRows);

    for(row = 1; row <= numRows; row++){
        for(col = 1; col <= row; col++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}