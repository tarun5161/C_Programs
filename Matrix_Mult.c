//Program for Matrix Multiplication
#include<stdio.h>
//Macro method 
#define MAX 50

int main()
{
    //Declare the two matrices and the resultant matrix
    int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
    //Declare the rows and columns of the given two matrices
    int arows, acolumns, brows, bcolumns;
    int i, j, k;
    //initialize the sum with 0
    int sum = 0;
    //Print a statement to enter the number of rows and columns
    printf("Enter the rows and columns of the matrix A: ");
    //Read the number of rows and columns of the first matrix
    scanf("%d %d",&arows,&acolumns);
    //Print a statement to enter the elements of the matrix
    printf("Enter the elements of the matrix:\n ");

    for(i=0; i<arows; i++){

        for(j=0; j<acolumns; j++){

            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the rows and columns of the matrix B: ");
    scanf("%d %d",&brows,&bcolumns);
    //Condition for matrix multiplication
    if (brows != acolumns)
    {
        printf("Sorry!, we cannot multiply the matrices A and B");
    }
    else{
        printf("Enter the elements of the matrix B:\n ");

        for(i=0; i<brows; i++){
            for(j=0; j<bcolumns; j++){
                scanf("%d",&b[i][j]);
            }
        }
    }
    printf("\n");
    //Main code block for Matrix multiplication
    for(i=0; i<acolumns; i++){
        for(j=0; j<brows; j++){
            for(k=0; k<bcolumns; k++){
                sum += a[i][k] * b[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }
    //Printing the resultant matrix
    printf("Resultant matrix:\n");
    for(i=0; i<arows; i++){
        for(j=0; j<bcolumns; j++){
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
