#include <stdio.h>

unsigned int number;
int count, largest;

int main(void)
{
    largest = 0;
    count = 1;
    while (count <= 10)
    {
        printf("input the number\n");
        scanf("%d", &number);
        if (number > largest)
        {
            largest = number;
        }
        printf("the count of the number is %d\n", count);
        printf("the largest number so far is: %d\n", largest);
        count++;
    }
}