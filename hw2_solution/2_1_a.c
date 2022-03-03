#include <stdio.h>

int main(void)
{
    int sales;
    printf("Input sales:");
    scanf("%d", &sales);

    if (sales >= 5000)                                    // => should be corrected to >=
        puts("Sales are greater than or equal to $5000"); // lacking semi-comma
    else
        puts("Sales are less than $5000"); // lacking semi-comma

    return 0;
}