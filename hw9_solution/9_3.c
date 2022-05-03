#include <stdio.h>
#include <stdlib.h>

struct part
{
    unsigned int PartNumber;
    char PartName[25];
};
typedef struct part Part;
int main(void)
{
    struct part a;
    struct part b[10];
    struct part *ptr;
    printf("Enter nuber of a:\n");
    scanf("%u", &a.PartNumber);
    printf("Enter the name of a(Less than 25):\n");
    scanf("%s", a.PartName);
    b[2] = a;
    ptr = b;
    printf("The unsigned number is : %d\n", (ptr + 2)->PartNumber);
    printf("The word is : %s\n", (ptr + 2)->PartName);
}
