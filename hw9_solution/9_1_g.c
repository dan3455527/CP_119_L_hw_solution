#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int hour;
    int minute;
    int second;
    printf("Enter the time in the form hh:mm:ss : ");
    scanf("%d%*c%d%*c%d", &hour, &minute, &second);
    printf("Time = %d:%d:%d\n", hour, minute, second);
}