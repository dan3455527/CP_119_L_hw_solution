#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Please enter the first integer:");
    scanf("%d", &a);
    printf("Please enter the second integer:");
    scanf("%d", &b);
    printf("Please enter the third integer:");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("The largest is %d\n", a);

        if (b < c)
        {
            printf("The smallest is %d\n", b);
        }
        else
            printf("The smallest is %d\n", c);
    }
    if (b > a && b > c)
    {
        printf("The largest is %d\n", b);

        if (a < c)
        {
            printf("The smallest is %d\n", a);
        }
        else
            printf("The smallest is %d\n", c);
    }
    if (c > a && c > b)
    {
        printf("The largest is %d\n", c);

        if (a < b)
        {
            printf("The smallest is %d\n", a);
        }
        else
            printf("The smallest is %d\n", b);
    }
}