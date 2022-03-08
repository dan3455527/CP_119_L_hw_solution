#include <stdio.h>

void prt(unsigned int n);

int main(void)
{
    unsigned int m;
    printf("Enter a height of pyramid:");
    scanf("%d", &m);
    prt(m);
}
void prt(unsigned int n)
{
    unsigned int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("=");
        }
        printf("\n");
    }
}
