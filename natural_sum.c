#include<stdio.h>

int main()
{
    int range,num ,sum=0;
    printf("Enter the range: ");
    scanf("%d",&range);
    while(num <= range){
        sum += num;
        num++;
    }
    printf("The sum of natural numbers upto range is %d",sum);
    return 0;
}