#include <stdio.h>

int main()
{
    unsigned int x;

    for (x = 20; x >= 3; x -= 3)
    {
        printf("%u\n", x);
    }
}
