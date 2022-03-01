#include <stdio.h>

int main(void)
{
    int n;

    for (n = 1; n <= 100; n++)
    {
        if (n % 10 == 0)
        {
            printf("%4d\n", n);
        }
        else
        {
            printf("%4d", n);
        }
    }
}
