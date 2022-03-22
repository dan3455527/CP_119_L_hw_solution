# include <stdio.h>
int gcd(int x, int y);

int main(void){
    int x, y, gcd_result;
    printf("input the x value:\n");
    scanf("%d", &x);
    printf("input the y value:\n");
    scanf("%d", &y);
    gcd_result = gcd(x, y);
    printf("the gcd of %d, %d is %d", x, y, gcd_result);
    return 0;
}

int gcd(int x, int y){
    int gcd_value;
    if (y != 0){
        return gcd(y, x % y);
    }
    else{
        return x;
    }
}
