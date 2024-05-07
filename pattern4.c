#include<stdio.h>

int main()
{
    int row,col,numRows,num = 1;
    printf("Enter the rows: ");
    scanf("%d",&numRows);

    for(row = 1; row<=numRows; row++)
    {
        for(col =1; col<= row; col++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}