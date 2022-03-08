# include <stdio.h>
# include <math.h>

int main(void){
    double x, fab_x, ceil_x, floor_x;
    // printf(" x      fabs(x)   ceil(x)   floor(x)\n");
    printf("%6s%10s%10s", "x", "fab(x)", "ceil(x)", "floor(x)");
    for (x = -3.0; x<=3.0; x += 0.1){
        fab_x = fabs(x);
        ceil_x = ceil(x);
        floor_x = floor(x);
        printf("%-6.1f%10.6f%10.6f%10.6f\n", x, fab_x, ceil_x, floor_x);
    }
}