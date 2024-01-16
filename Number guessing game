#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;
    srand(time(0));
    answer = (rand()%MAX) + MIN;

    do{
        printf("Enter the guess:");
        scanf("%d", &guess);
        if(guess > answer )
        {
            printf("YOUR GUESS IS TOO HIGH\n");
        }
        else if(guess < answer)
        {
            printf("YOUR GUESS IS TOO LOW\n");
        }
        else
        {
            printf("YOUR GUESS IS CORRECT\n");
        }
        guesses++;
    }while(answer!=guess);
    if (guesses <=8)
    {
        printf("YOU EARN +100 POINTS");
    }
    else if(guesses >10)
    {
        printf("-20 POINTS");
    }
    printf("*************************\n");
    printf("NUMBER OF ATTEMPT ARE %d\n", guesses);
    printf("************************");

    return 0;
}
