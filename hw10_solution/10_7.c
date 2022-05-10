#include <stdio.h>

unsigned int reverseBits(unsigned int value);
void displayBits(unsigned int value);
int main(void)
{
    unsigned int a;
    printf("Enter an unsigned int: ");
    scanf("%u", &a);
    printf("\nBefore bits are reversed:");
    displayBits(a);
    a = reverseBits(a);
    printf("\nAfter bits are reversed:");
    displayBits(a);
}

unsigned int reverseBits(unsigned int value)
{
    unsigned int mask = 1;
    unsigned int temp = 0;
    unsigned int i;
    for (i = 0; i <= 15; ++i)
    {
        temp <<= 1;
        temp |= (value & mask);
        value >>= 1;
    }
    return temp;
}

void displayBits(unsigned int value)
{
    unsigned int c;
    unsigned int displayMask = 1 << 15;
    printf("%7u = ", value);
    for (c = 1; c <= 16; ++c)
    {
        value &displayMask ? putchar('1') : putchar('0');
        value <<= 1;
        if (c % 8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}