#include <stdio.h>
unsigned int packCharacters(char x, char y);
void displayBits(unsigned int value);
int main(void)
{
    char a, b, c, d;
    unsigned int result;
    printf("Enter four characters: ");
    scanf("%c %c %c %c", &a, &b, &c, &d);
    printf("\'%c\' in bits as an unsigned int is:\n", a);
    displayBits(a);
    printf("\n\'%c\' in bits as an unsigned int is:\n", b);
    displayBits(b);
    result = packCharacters(a, b);
    printf("\n\'%c\' and \'%c\' packed in an unsigned int:\n", a, b);
    displayBits(result);
    printf("\n\'%c\' in bits as an unsigned int is:\n", c);
    displayBits(c);
    result = packCharacters(result, c);
    printf("\n\'%c\' and \'%c\' and \'%c\' packed in an unsigned int:\n", a, b, c);
    displayBits(result);
    printf("\n\'%c\' in bits as an unsigned int is:\n", d);
    displayBits(d);
    result = packCharacters(result, d);
    printf("\n\'%c\' and \'%c\' and \'%c\' and \'%c\' packed in an unsigned int:\n", a, b, c, d);
    displayBits(result);
}
unsigned int packCharacters(char x, char y)
{
    unsigned int pack = x;
    pack <<= 8;
    pack |= y;
    return pack;
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