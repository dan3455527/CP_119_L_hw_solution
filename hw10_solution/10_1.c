#include <stdio.h>
union integer
{
    char c;
    short s;
    int i;
    long b;
};
int main(void)
{
    union integer a;
    printf("Enter a character: ");
    scanf("%c", &a.c);
    printf("'%c' printed as a character is %c\n", a.c, a.c);
    printf("'%c' printed as a short integer is %hd\n", a.c, a.s);
    printf("'%c' printed as an integer is %d\n", a.c, a.i);
    printf("'%c' printed as a long integer is %ld\n", a.c, a.b);
    printf("\nEnter a short integer: ");
    scanf("%hd", &a.s);
    printf("%hd printed as a character is %c\n", a.s, a.c);
    printf("%hd printed as a short integer is %hd\n", a.s, a.s);
    printf("%hd printed as an integer is %d\n", a.s, a.i);
    printf("%hd printed as a long integer is %ld\n", a.s, a.b);
    printf("\nEnter an integer: ");
    scanf("%d", &a.i);
    printf("%d printed as a character is %c\n", a.i, a.c);
    printf("%d printed as a short integer is %hd\n", a.i, a.s);
    printf("%d printed as an integer is %d\n", a.i, a.i);
    printf("%d printed as a long integer is %ld\n", a.i, a.b);
    printf("\nEnter a long integer: ");
    scanf("%ld", &a.b);
    printf("%ld printed as a character is %c\n", a.b, a.c);
    printf("%ld printed as a short integer is %hd\n", a.b, a.s);
    printf("%ld printed as an integer is %d\n", a.b, a.i);
    printf("%ld printed as a long integer is %ld\n", a.b, a.b);
}