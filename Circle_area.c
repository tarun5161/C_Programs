//Program to find the area of circle
#include<stdio.h>

int main()
{
    float r, area;
    //Printing the statement to enter the radius
    printf("Enter the radius in m: ");
    //Aloowing the user to enter the radius
    scanf("%f",&r); 
    //Calculating the area of circle
    area = 3.14*r*r;
    //Display the area of circle
    printf("\nThe area of circle is:%f Sq.m",area);
    return 0;
    
}