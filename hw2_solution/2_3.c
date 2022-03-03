#include <stdio.h>

int main(void)
{
    int count;
    int n1, n2, n3, n4;
    count = 1;

    while (count <= 10)
    {

        n1 = count;
        n2 = count * count;
        n3 = count * count * count;
        n4 = count * count * count * count;
        printf("%d\t%d\t%d\t%d\n", n1, n2, n3, n4);
        count++;
    }
}