# include <stdio.h>
# include <time.h>
# include <stdlib.h>

void get_new_point();

int main(){
    get_new_point();
}

void get_new_point(){
    srand(time(NULL));
    int min = -10;
    int max = 10;
    // int coord[3];

    // for (int i = 0; i < 3; i++){
    //     coord[i] = rand() % (max - min + 1) + min;
    // }
    int x = rand() % (max - min + 1) + min;
    int y = rand() % (max - min + 1) + min;
    int z = rand() % (max - min + 1) + min;
    printf("x: %d, y: %d, z: %d", x, y, z);
}