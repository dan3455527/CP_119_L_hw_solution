# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void){
    int random_num, guess_num;
    char run;
    srand(time(NULL));
    random_num = rand() % 1000;
    printf("I have a number between 1 and 1000\n");
    printf("Can you guess my number\n");
    while(guess_num != random_num){
        printf("print the guess number\n");
        scanf("%d", &guess_num);
        if (guess_num > random_num){
            printf("Too high. Try again\n");
        }
        else if (guess_num < random_num){
            printf("Too low. Try again\n");
        }
        else if (guess_num == random_num){
            printf("Excellent! You guessed my number!\n");
            printf("Would you like to try again (y/n)\n");
        }   
    }
}
