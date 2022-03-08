#include <stdio.h>

void lcm(int a, int b);

int main(void)
{
    int a, b;
    printf("Inuput first positive integers:");
    scanf("%d", &a);
    printf("Inuput second positive integers:");
    scanf("%d", &b);
    lcm(a, b);
}

void lcm(int a, int b)
{
    int i, p;
    if (a < b)
    {
        for (i = 1; i <= a; i++)
        {
            p = b * i;
            if (p % a == 0)
            {
                printf("%d\n", p);
                break;
            }
            else
                continue;
        }
    }
}