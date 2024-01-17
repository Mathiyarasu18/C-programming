#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100]={"1.Who is the father of C language",
                           "2.Which of the following is not valid C variable name",
                           "3.All keywords in C are in",
                           "4.What is an example of iteration in C",
                           "5.Function can return enumeration constant in C"};
    char options[][100]={"A.Steve jobs","B.James Gosling","C.Dennis Ritchie","D.Rasmus Lerdorf",
                         "A.int number","B.float rate","C.int variable_count","D.int$main",
                         "A.LowerCase letters","B.UpperCase letters","C.CamelCase letters","D.None of the above",
                         "A.for","B.while","C.if","D.Both a and b",
                         "A.true","B.false","C.depends on compiler","D.depends on standard"};
    char answers[5]={'C','D','A','D','A'};
    char guess;
    int score;
    int NumberOfQuestions = sizeof(questions)/sizeof(questions[0]);
    printf("QUIZ GAME");
    for(int i=0;i<NumberOfQuestions;i++)
    {
        printf("%s\n",questions[i]);
        printf("\n");

        for(int j=(i*4); j<(i*4)+4; j++)
        {
            printf("%s\n",options[j]);
            printf("\n");
        }
        printf("Enter the correct option:");
        scanf("%c",&guess);
        scanf("%c");
        guess = toupper(guess);

        if(guess==answers[i])
        {
            printf("CORRECT ANSWER\n");
            score++;
        }
        else
        {
            printf("WRONG ANSWER\n");
        }
    }
    printf("*******************\n");
    printf("FINAL SCORE:%d/%d\n",score,NumberOfQuestions);
    printf("*******************");
    return 0;
}
