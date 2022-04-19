#include <stdio.h>

int main(void)
{
    double value1 = 20.4568;
    double value2;

    double *dPtr;                           //(a)
    dPtr = &value1;                         //(b)
    printf("dPtr:%.4f\n", *dPtr);           //(c)
    value2 = *dPtr;                         //(d)
    printf("value2:%.4f\n", value2);        //(e)
    printf("value1 address:%p\n", &value1); //(f)
    printf("dPtr address:%p\n", dPtr);      //(g)
    printf("Is the dPtr printed the same as value1’s address? ");
    if (dPtr == &value1)
        printf("Yes.\n");
    else
        printf("No.\n");
}