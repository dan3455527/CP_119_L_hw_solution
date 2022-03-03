#include <stdio.h>

int main(void)
{
    int x, total;
    printf("Input x:");
    scanf("%d", &x);
    while (x <= 100) // Whihe should be corrected to while, and lacking {}
    {
        total += x; // =+ should be corrected to +=
        ++x;
    }
    // for test
    printf("%d", total);
}