#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{

    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the Guessing Number.. \n");
    random = rand() % 100 + 1; //Generate Range Between 1 to 100

    do{

        printf("Please.. Enter Your Guess Between ( 1 to 100 ): ");
        scanf("%d", &guess);
        no_of_guess++;

        if(guess > random)
        {
            printf("Guessed.. Larger Number! \n");
        }
        else if(guess < random)
        {
            printf("Guessed.. Smaller Number! \n");
        }
        else
        {
            printf("Congratulations..! You have successfully guessed the number. THE NUMBER OF %d ATTEMPTS \n", no_of_guess);
        }
    
    }while (guess != random);
   
    printf("Thanks For Playing.. \n");
    printf("Developed By: Kalpeshwaghkp");
    
    
}
