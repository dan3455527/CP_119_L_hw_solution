# include <stdio.h>

int main(void){
    double pi = 0, precision, tolerance ;
    int terms = 1;
    int terms_limit;

    printf("enter run terms limits:\n");
    scanf("%d", &terms_limit);

    while(terms <= terms_limit){
        if (terms % 2 == 0){
            pi = pi - 4.0 / (2 * terms - 1);
        }
        else{
            pi = pi + 4.0 / (2 * terms - 1);
        }
        printf("terms : %-5d %15.10lf\n", terms, pi);
        terms ++;
    }
}