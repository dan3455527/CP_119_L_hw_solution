#include <stdio.h>

int main(void)
{
    int x, i, j;
    // prompt user for input
    printf("%s", "Enter an integer in the range 1-20:");
    scanf("%d", &x); // read value for x
    for (i = 1; i <= x; i++)
    { // count from 1 to x
        for (j = 1; j <= x; j++)
        { // count from 1 to x
            if (j == i)
                printf("%c", '0'); // output 0
            else
                printf("  ");
        } // end inner for
        printf("\n");
    } // end outer for
} // end of main