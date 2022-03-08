#include <stdio.h>

double cube(float number); // declaration without variables
int main(void)
{
    float number;
    printf("Enter a number:");
    scanf("%f", &number);
    printf("%6.2f\n", cube(number));
}

double cube(float number) // declaration without datatype
{
    return number * number * number;
}
