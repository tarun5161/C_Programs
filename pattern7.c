#include <stdio.h>

int main()
{
    int row,col,numRows;
    printf("Enter the rows: ");
    scanf("%d",&numRows);
    
     for(row = 1; row <= numRows;row++)
    {
        for(col =1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(row = numRows-1;row>=1;row--)
    {
    
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
    