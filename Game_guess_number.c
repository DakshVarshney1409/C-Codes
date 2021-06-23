# include <stdio.h>
# include <stdlib.h>
# include <time.h>

// This code was created by Daksh Varshney

int main()
{
    int num,guess;
    srand(time(0));
    num=1+rand()%100;//Generate random numbers from 1 to 100
    printf("Welcome to the Guess the Number game....\n");
    printf("Rules:\n1. The program will generate a random number between 1-100.\n2. You need to guess the number.\n3. Let's play!\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        if(guess<num)
        {
            printf("Try a bit higher....\n");
        }
        else if(guess>num)
        {
            printf("Try a bit lower....\n");
        }
    }while(guess!=num);
    printf("\n");
    printf("*******\n");
    printf("Yeah! You got it right...\n");
    printf("The number was %d.\n",num);
    printf("*******\n");
    return 0;
}
