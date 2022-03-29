#include <stdio.h>

void function_a()
{
    int a1[5];
    printf("Enter a number:");
    scanf("%d", &a1[4]);
    printf("a1[4] = %d\n", a1[4]);
}
void function_b()
{
    int a2[3][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    printf("a2[0][0~2] = %d%d%d\n", a2[0][0], a2[0][1], a2[0][2]);
}
void function_c()
{
    double f[3] = {
        1.1,
        10.01,
        100.001};
    for (size_t i = 0; i < 3; i++)
    {
        printf("f[%zu] = %.3f\n", i, f[i]);
    }
}
void function_d()
{
    double d[3][5];
    d[2][4] = 2.345;
    printf("d[2][4] = %.3f\n", d[2][4]);
}
int main(void)
{
    function_a();
    function_b();
    function_c();
    function_d();
}