#include <stdio.h>
#include <math.h>

int main(void)
{
    double x;
    printf("x\t fabs(x)\t ceil(x)\t floor(x)\n");
    for (x = -3.0; x <= 3.0; x += 0.1)
    {
        printf("%-5.1f\t%10.6f\t%10.6f\t%10.6f\n", x, fabs(x), ceil(x), floor(x));
    }
}