
#include <stdio.h>

int main()
{
    int row,col,numRows,space;
    printf("Enter the rows: ");
    scanf("%d",&numRows);
    
    for(row = 1; row <= numRows;row++)
    {
        for(space = 1;space<=(numRows-row);space++)
        {
            printf(" ");
        }
        for(col =1;col<=(2*row-1);col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}