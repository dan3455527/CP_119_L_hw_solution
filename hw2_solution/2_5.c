#include <stdio.h>

int main(void)
{
    int n, n_for_fac, n_for_sum;
    double fac_rec_sum, e, factorial;
    printf("enter the n for the max iteration:\n");
    scanf("%d", &n);
    n_for_sum = n;

    fac_rec_sum = 0;
    while (n_for_sum > 0)
    {
        factorial = 1;
        n_for_fac = n_for_sum;
        while (n_for_fac > 0)
        {
            factorial = factorial * n_for_fac;
            n_for_fac = n_for_fac - 1;
        }
        fac_rec_sum = fac_rec_sum + (1 / factorial);
        n_for_sum = n_for_sum - 1;
    }
    e = fac_rec_sum + 1;
    printf("e = %f\n", e);
}
