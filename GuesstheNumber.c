#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)
{
int guess, generatednumber;

srand(time(NULL));
generatednumber = rand() % 100 + 1;

        printf("\nWelcome, Try to guess the Number between 1 and 100!");


    do
    {   printf("\nTry to Guess again!");
        scanf("%d", &guess);
    if (guess > generatednumber)
    {
        printf("\nYour number is too high");
    }else if (guess < generatednumber)
    {
        printf("\nYour number is too low");
    }
    } while (guess != generatednumber);

    printf("Congratz ! You Guessed the number right!");

    return 0;
    
    
}

