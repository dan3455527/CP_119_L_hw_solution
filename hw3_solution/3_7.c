# include <stdio.h>

int main(){
    float pi, dominator, sum_odd = 0, sum_even = 0;
    int odd_count, even_count, terms;
    printf("enter the terms to calculate:\n");
    scanf("%d", &terms);

    odd_count = terms / 2 + terms % 2;
    even_count = terms / 2;

    // odd element
    dominator = 1;
    for (int count = 0; count < odd_count; count ++){
        sum_odd = sum_odd + (4 / dominator); 
        dominator += 4;
    }
    // even element
    dominator = 3;
    for (int count = 0; count < even_count; count ++){
        sum_even = sum_even - (4 / dominator);
        dominator += 4;
    }
    pi = sum_even + sum_odd;
    printf("term : %-6d\npi : %10f\n", terms, pi);
}
// first 3.14  : 119
// first 3.141 :