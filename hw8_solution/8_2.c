#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

int main(void)
{
    char instr[SIZE] = "(555) 555-5555";
    char area_str[SIZE];
    char tel_num_str[SIZE];
    char delimiter[] = "()- ";
    char *kPtr, *tPtr;
    int area;
    long tel_num;

    kPtr = strtok(instr, delimiter);
    strcat(area_str, kPtr);
    area = strtol(area_str, &tPtr, 10);

    while ((kPtr = strtok(NULL, delimiter)) != NULL)
    {
        strcat(tel_num_str, kPtr);
    }

    tel_num = strtol(tel_num_str, &tPtr, 10);

    printf("The area code: %s\n", area_str);
    printf(" Converted to int: %d\n", area);
    printf("The telphone number: %s\n", tel_num_str);
    printf(" Converted to int: %ld\n", tel_num);
}