#include<stdio.h>

int main(){

    int row,col,numRows;
    printf("Enter the rows: ");
    scanf("%d",&numRows);

    for(row = 1; row <= numRows; row++){
        for(col =1; col <= numRows; col++){
            if((row+col)<=numRows)
                printf(" ");
            else
                printf("* ");
        }
        printf("\n");
    }
}