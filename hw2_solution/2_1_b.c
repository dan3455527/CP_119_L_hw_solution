#include <stdio.h>

int main(void)
{
    int x = 1, product = 0;
    while (x <= 10) // No semi-comma after while
    {
        product *= x;
        ++x;
    }
}