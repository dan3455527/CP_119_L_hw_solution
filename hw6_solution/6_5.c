# include <stdio.h>
# include <time.h>
# include <stdlib.h>

void get_new_point();

int main(){
    int x, y, z;
    get_new_point(&x, &y, &z);
    printf("x = %d, y = %d, z = %d", x, y, z);
}

void get_new_point(int *x, int *y, int *z){
    srand(time(NULL));
    int min = -10;
    int max = 10;

    *x = rand() % (max - min + 1) + min;
    *y = rand() % (max - min + 1) + min;
    *z = rand() % (max - min + 1) + min;
}