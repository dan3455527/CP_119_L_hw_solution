#include <stdio.h>

int main(void)
{
    int count = 1;
    while (count <= 500)
    {
        printf("$");
        if (count % 50 == 0)
        {
            printf("\n");
        }
        count++;
    }
}