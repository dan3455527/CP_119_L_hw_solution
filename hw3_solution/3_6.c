#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    float count, avg;
    for (n = 1; n <= 100; n++)
    {
        if (n % 7 == 0)
        {
            sum += n;
            count++;
        }
    }
    avg = sum / count;
    printf("Average of all multiples of 7 from 1 to 100 is : %.2f\n", avg);
}
