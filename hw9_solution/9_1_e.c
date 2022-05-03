#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void)
{
    char s[SIZE];
    printf("Enter a string : ");
    scanf("%[^p]", s);
    printf("The input was : %s\n", s);
}