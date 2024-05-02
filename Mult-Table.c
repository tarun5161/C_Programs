#include<stdio.h>

int main()
{
    //Declare the variable 
    int number;
    //Print the statement to enter the number
    printf("Enter the number:");
    //Allow user to enter an inter value
    scanf("%d",&number);
    //For loop to print the multiplication table
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",number,i,number * i);
    }
    return 0;

}
