#include<stdio.h>

int main()
{
    int range,num,sum = 0;
    printf("Enter the range: ");
    scanf("%d",&range);

    for(num = 1; num <= range; num++)
    {
        if(num%2!=0)
        {
            sum += num;
        }
    }
    printf("The sum of odd numbers upto the range is %d",sum);
    return 0;
}