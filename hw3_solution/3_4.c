#include <stdio.h>

int main(void)
{
    int n, x;
    int sum = 0;
    float count, avg;
    printf("How many numbers for calculate:");
    scanf("%f", &count);
    for (n = 1; n <= count; n++)
    {
        printf("Input an integer number:");
        scanf("%d", &x);
        sum += x;
    }
    avg = sum / count;
    printf("Average of %f numbers is:%.2f\n", count, avg);
}
