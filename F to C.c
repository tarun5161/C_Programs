#include<stdio.h>

float toCelcius(float fahrenheit)
{
    return ((fahrenheit - 32.0) * 5.0) / 9.0;
}

int main()
{
    float f_value;
    printf("Enter the temp in F: ");
    scanf("%.2f",&f_value);
    printf("Fahrenheit: %.2f",f_value);
    float result = toCelcius(f_value);
    printf("The converted tem to Celcius is: %.2f",result);
    return 0;

}