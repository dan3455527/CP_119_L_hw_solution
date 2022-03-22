#include <stdio.h>
#include <math.h>

float power(float base, int exponent);

int main(void)
{
    float base;
    int exponent;
    float x;
    printf("Enter base:");
    scanf("%f", &base);
    printf("Enter exponent (Integer & >= 1):");
    scanf("%d", &exponent);
    x = power(base, exponent);
    printf("power(%.2f, %d) = %.2f\n", base, exponent, x);
}

float power(float base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}