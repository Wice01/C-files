#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int count = 1, guess, correct_guess;
    char answer, name[50];

    while(true)
    {
        srand(time(NULL));
        correct_guess = rand() % 8;
        printf("%d\n", correct_guess);

        //printf("Enter your name: ");
        //scanf("%49s", name);
        //getchar();
        printf("Welcome!!! would you like to play the game? Enter 'y' for yes or 'n' for no: ");
        scanf("%c", &answer);
        getchar();

        /*if(answer == 'n' || answer == 'N')
        {
            printf("Goodbye!!!");
            break;
        }
        while(answer != 'y' || answer != 'Y' )
        {
            if(answer == 'n' || answer == 'N')
            {
            printf("Goodbye!!!");
            break;
            }
            else if (answer != 'y' || answer != 'Y' && (answer == 'n' || answer == 'N'))
            {
            printf("Invalid input!!!\n");
            printf("Would you like to play the game? Enter 'y' for yes or 'n' for no: ", name);
            scanf("%c", &answer);
            getchar(); 
            }
        }*/
        while(answer == 'y')
        {
            printf("Enter a number between 0 - 9: ");
            scanf("%d", &guess);

            while(count < 3 )
            {
                if(guess == correct_guess)
                {
                    printf("You guessed the number correctly!!!\n");
                    break;
                }
                if(guess != correct_guess)
                {
                    if (guess < correct_guess)
                    {
                        printf("%d is too low!!! Try again\n", guess);
                    }
                    else if (guess > correct_guess)
                    {
                        printf("%d is too high!!! Try again\n", guess);
                    }
                    printf("Guess a number between 0 - 9: ");
            	    scanf("%d", &guess);
                    getchar();
                }
                count++;
            }
        }
        if(answer == 'n' || answer == 'N')
        {
            break;
        }
    }
    return (0);
}