#include <stdio.h>

void display(unsigned int value);
unsigned pow2(unsigned int number, unsigned int power);

int main(void)
{
    unsigned int num;
    unsigned int ans;
    unsigned int power;

    printf("Enter an unsigned int:");
    scanf("%u", &num);
    printf("\nThe integer result is:");
    display(num);

    ans = pow2(num, power);
    printf("\nThe result in bits is %u:", ans);
    display(ans);
    return 0;
}

unsigned pow2(unsigned int n, unsigned int p)
{
    return n << p;
}

void display(unsigned int value)
{
    unsigned c;
    unsigned mask = 1 << 15;

    printf("%7u = ", value);

    for (c = 1; c <= 16; c++)
    {
        value &mask ? putchar('1') : putchar('0');
        value <<= 1;

        if (c % 8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}