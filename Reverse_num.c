//Program to find the Min and Max values in an Array
#include<stdio.h>

int main()
{
    int n;
    //Enter the required elements
    printf("Enter the number of elements you want to reverse: \n" );
    scanf("%d",&n);
    //This is the variable length
    int a[n];
    int i;
    //Entering the all elements
    printf("Enter all the %d elements: \n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    //Displaying the result
    printf("Elements in reverse order are: \n");
    for(i=n-1; i>= 0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;

}