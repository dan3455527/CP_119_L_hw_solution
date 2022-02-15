#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int age;
    printf("How old are you?");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);

    system("pause");
    return 0;
}