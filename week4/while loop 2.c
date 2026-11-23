#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int secretNumber;
    int guess;
    int attempts = 0;


    srand(time(0));


    secretNumber = (rand()%20) + 1;

    printf("welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20.\n");


    while(1){
        printf("Enter your Guess:");
        scanf("%d",&guess);

        attempts++;

        if(guess > secretNumber){
           printf("Too high!\n");
           }
         else if (guess < secretNumber){
              printf("Too low!\n");
            }
          else{
              printf("congratulations! You guessed the number.\n");
              printf("It took you %d attempts.\n",attempts);
              break;
              }
              }
     return 0;
     }
