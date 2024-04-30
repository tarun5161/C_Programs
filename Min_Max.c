#include<stdio.h>

void minMax(int arr[], int len, int *min, int *max)
{
    *min = *max = arr[0];
    int i;

    for(i=1; i<len; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int a[] = {23,22,234,9,43,23,44,76,12,213,354};
    int min, max;
    //Finding the lengeth of the array
    int len = sizeof(a)/sizeof(a[0]);

    //Calling the minMax function
    minMax(a,len,&min,&max);

    //Printing the minumum and Maximum values
    printf("Min value of array is: %d and Max number is: %d",min,max);

return 0;
}