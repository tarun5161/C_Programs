/*Program to swap two numbers without the third variable*/
#include<stdio.h>

int main()
{
    //Declare the variables
    int x,y;
    //Print the statement to enter the two numbers
    printf("Enter the two numbers X & Y you want to swap:");
    scanf("%d %d",&x,&y);
    //Condition to swap the numbers
    x = x + y;
    y = x - y;
    x = x - y;
    //Print the swapped values
    printf("The swapped numbers are X = %d and Y = %d",x,y);
    return 0;
}