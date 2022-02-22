#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int count = 1;
    int t;
    double factorial = 1;
    double e;
    double sum = 0;

    // printf("Enter an positive integer:");
    // scanf("%d", &n);
    n = 2;

    while (count > 0)
    {
        count = n;
        t = n;
        while (t > 0)
        {
            factorial = t * factorial;
            t -= 1;
        }
        count -= 1;
        sum = sum + (1 / factorial);
    }
    sum = sum + 1;
    printf("%d! = %f\n", n, factorial);
    printf("e = %f\n", e);
    printf("sum = %f\n", sum);
    return 0;
}