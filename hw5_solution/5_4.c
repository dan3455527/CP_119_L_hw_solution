#include <stdio.h>
#define SIZE 200

int main(void)
{
    char s[SIZE];
    char temp[SIZE];
    int done = 0;
    size_t idx = 0;
    size_t i;
    int count = 0;
    while (!done)
    {
        count++;
        printf("(index = %zu) Enter a word:", idx);
        scanf("%119s", temp);
        if (count == 5)
        {
            done = 1;
        }
        else
        {
            if (idx != 0 && idx < SIZE - 1)
            {
                s[idx] = ' ';
                idx++;
            }
            for (i = 0; i < SIZE && temp[i] != '\0' && i + idx < SIZE - 1; i++)
            {
                s[idx + i] = temp[i];
            }
            idx += i;
        }
        }
    if (idx < SIZE)
    {
        s[idx] = '\0';
        for (i = 0; i < SIZE && s[i] != '\0'; i++)
        {
            printf("%c", s[i]);
        }
        puts("");
    }
    else
    {
        puts("Error: string capacity exceeds.");
    }
}