# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <unistd.h> // for unix base machine
// # include <windows.h> for windows base machine
int rand_num_generate();
void get_tortoise_steps(int rand_num, int *tor_ptr);
void get_hare_steps(int rand_num, int *hare_ptr);
void disp(int *tor_ptr, int *hare_ptr);
void judge(int *tor_ptr, int *hare_ptr, int *end_flag);

int main(void){
    int tor_pos = 1; int hare_pos = 1; int finish = 70; int rand_num, clock = 0;
    int *tor_ptr = &tor_pos;
    int *hare_ptr = &hare_pos;
    int end_flag = 0;
    srand(time(NULL));

    printf("BANG!!!\n");
    printf("AND THEY'RE OFF !!!\n");
    while(0<1){
        printf("Time: %d\n", clock);
        rand_num = rand_num_generate();
        get_tortoise_steps(rand_num, tor_ptr);
        get_hare_steps(rand_num, hare_ptr);
        disp(tor_ptr, hare_ptr);
        judge(tor_ptr, hare_ptr, &end_flag);
        sleep(1);
        if (end_flag == 1){
            break;
        }
        clock += 1;
    }
    return 0;
}

int rand_num_generate(){
    int rand_num = rand() % 10 + 1;
    return rand_num;
}
void get_tortoise_steps(int rand_num, int *tor_ptr){
    if (rand_num>=1 && rand_num<=5){ // flat plot
        *tor_ptr = *tor_ptr + 3;
        if (*tor_ptr > 70){
            *tor_ptr = 70;
        }
    }
    else if (rand_num>=6 && rand_num<=7){ // slip
        *tor_ptr = *tor_ptr - 6;
        if (*tor_ptr < 0){
            *tor_ptr = 0;
        }
    }
    else if (rand_num>=8 && rand_num<=10){ //slow plod
        *tor_ptr = *tor_ptr + 1;
        if (*tor_ptr > 70){
            *tor_ptr = 70;
        }
    }
}

void get_hare_steps(int rand_num, int *hare_ptr){
   if (rand_num>=1 && rand_num<=2){ //sleep
        *hare_ptr = *hare_ptr + 0;
    }
    else if (rand_num>=3 && rand_num<=4){ //big hop
        *hare_ptr = *hare_ptr + 9;
        if (*hare_ptr > 70){
            *hare_ptr = 70;
        }
    }
    else if (rand_num==5){ //big slip
        *hare_ptr = *hare_ptr - 12;
        if (*hare_ptr < 0){
            *hare_ptr = 0;
        }
    }
    else if (rand_num>=6 && rand_num<=8){ //small hop
        *hare_ptr = *hare_ptr + 1;
        if (*hare_ptr > 70){
            *hare_ptr = 70;
        }
    }
    else if (rand_num>=9 && rand_num<=10){ //small slip
        *hare_ptr = *hare_ptr - 2;
        if (*hare_ptr < 0){
            *hare_ptr = 0;
        }
    }

}

void disp(int *tor_ptr, int *hare_ptr){
    //printf("current status:\n");
    //printf("tortoise at sqr %d, hare at sqr %d\n", *tor_ptr, *hare_ptr);
    char race_court[70];
    race_court[*tor_ptr] = 'T';
    race_court[*hare_ptr] = 'H';
    for (int i=0; i<70; i++){
        if (i != *tor_ptr && i != *hare_ptr){
            race_court[i] = '_';
        }
    }
    if (*tor_ptr == *hare_ptr){
        printf("OUCH!!");
    }
    else{
        for (int i = 0; i<70; i++){
            printf("%c", race_court[i]);
        }
    }
    printf("\n");
}

void judge(int *tor_ptr, int *hare_ptr, int *end_flag){
    if (*tor_ptr >= 70 || *hare_ptr >= 70){
        if (*tor_ptr >= 70 && *hare_ptr < 70){
            printf("tortoise win the reward! \n");
        }
        else if (*tor_ptr < 70 && *hare_ptr >= 70){
            printf("hare win the reward! \n");
        }
        else if (*tor_ptr >= 70 && *hare_ptr>= 70){
            printf("its tie!!\n");
        }
        *end_flag = 1;
    }
}