#include <stdio.h>

int main(void)
{
    float C, F;
    printf("%5s%10s\n", "C", "F");

    for (C = 30.0; C <= 50.0; C++)
    {
        F = (9 / 5.0) * C + 32;
        printf("%5.2f%10.2f\n", C, F);
    }
}
