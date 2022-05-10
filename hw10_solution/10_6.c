#include <stdio.h>
void unpackCharacters(char *aPtr, char *bPtr, unsigned int pack);
void displayBits(unsigned int value);

int main(void)
{
    char a;
    char b;
    unsigned int packed = 16706;
    printf("The packed character representation is:\n");
    displayBits(packed);
    unpackCharacters(&a, &b, packed);
    printf("\nThe unpacked characters are \'%c\' and \'%c\'\n", a, b);
    displayBits(a);
    displayBits(b);
}

void unpackCharacters(char *aPtr, char *bPtr, unsigned int pack)
{
    unsigned int mask1 = 65280;
    unsigned int mask2 = 255;
    *aPtr = (pack & mask1) >> 8;
    *bPtr = (pack & mask2);
}

void displayBits(unsigned int value)
{
    unsigned int c;
    unsigned int displayMask = 1 << 15;
    printf("%7u = ", value);
    for (c = 1; c <= 16; ++c)
    {
        value &displayMask ? putchar('1') : putchar('0');
        value <<= 1; // shift value 1 bit to the left
        if (c % 8 == 0)
        {
            putchar(' ');
        }
    }
    putchar('\n');
}