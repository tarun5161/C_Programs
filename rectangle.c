#include<stdio.h>

int main()
{
    //Declare the required variables
    float l,b,perimeter,area;
    //Print the statements to enter the length and breadth
    printf("Enter the length: ");
    scanf("%f",&l);
    printf("Enter the breadth: ");
    scanf("%f",&b);
    //Formula for perimeter of rectangle
    perimeter = 2 *(l+b);
    //Area of rectangle
    area = l*b;

    printf("Perimeter of rectangle is: %.2f\n",perimeter);
    printf("Area of rectangle: %.2f",area);

    return 0;

}