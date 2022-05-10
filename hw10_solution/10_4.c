#include <stdio.h>

int mystery(unsigned int bits); // prototype

int main(void)
{
    unsigned int x; // x will hold an integer entered by the user

    puts("Enter an integer: ");
    scanf("%u", &x);

    printf("The result is %d\n", mystery(x));
}

// What is this function do?
// Determine whether the input x can divisible by 2 or not
int mystery(unsigned int bits)
{
    // 1. mask => 0x80000000 (shift 1 left by 31 bit positions)
    unsigned int mask = 1 << 31; // initialize mask
    unsigned int total = 0;      // initialize total
    int count = 0;
    // 2.1 from i = 1 to i = 32, run for loop
    // 2.2 each time, shift bits left by 1 bit positions
    for (unsigned int i = 1; i <= 32; ++i, bits <<= 1)
    {
        // 3. if bits and mask equal to mask, than total + 1
        if ((bits & mask) == mask)
        {
            ++total;
            printf("%d\n", total);
        }
        count++;
        printf("%d\n", count);
    }
    // When the total can divisible by 2, output 0
    // Otherwise, output 1
    return !(total % 2) ? 1 : 0;
}
