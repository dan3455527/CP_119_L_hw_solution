#include <stdio.h>

int main(void)
{
    int A, B;
    printf("Please enter the first integer A:");
    scanf("%d", &A);
    printf("Please enter the second integer B:");
    scanf("%d", &B);

    printf("%d + %d = %d\n", A, B, A + B);
    printf("%d - %d = %d\n", A, B, A - B);
    printf("%d * %d = %d\n", A, B, A * B);

    if (B != 0)
        printf("%d / %d = %d, with %d as the remainder\n", A, B, A / B, A % B);
}