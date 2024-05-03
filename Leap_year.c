//Program to find the year is leap year or not
#include<stdio.h>

int main()
{
    //Declare the year variable
    int year;
    //Print the statement to enter the year
    printf("Enter the year you want to check: ");
    scanf("%d",&year);
    //condition to checl wheather the year is leap year or not
    if(year%4==0)
    {
        printf("The year %d is leap year.\n",year);
    }
    else
    {
        printf("The year %d is not a leap year.\n",year);
    }
    return 0;

}