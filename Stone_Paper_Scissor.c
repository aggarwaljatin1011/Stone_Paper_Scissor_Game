#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomnumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}

int greater(char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c1 == 's' && c2 == 'r')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 's')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c1 == 'r' && c2 == 'p')
    {
        return 0;
    }
}
int main()
{
    char name[34];
    char chars[] ={'r','p','s'};
    int temp;
    char playerchar,compchar;
    int pscore = 0, cscore =0;
    printf("Welcome to the world of ROCK, PAPER and SCISSOR\n\n");
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("WELCOME %s\n\n",name);
    for (int i = 0; i < 3; i++)
    {
        printf("YOUR TURN\n");
        printf("%s make your choice\n",name);
        printf("CHOOSE\n1 for ROCK\n2 for PAPER\n3 for SCISSORS\n");
        scanf("%d",&temp);
        getchar();
        playerchar = chars[temp -1];
        printf("You have Chosen %c\n\n",playerchar);

        printf("COMPUTER's Turn\n");
        temp = generaterandomnumber(3);
        compchar = chars[temp];
        printf("Computer has Chosen %c\n",compchar);

        if (greater(playerchar,compchar) == 1)
        {
            pscore += 1;
            printf("YOU HAVE WON THIS ROUND\n"); 
        }
        else if (greater(playerchar,compchar) == -1)
        {
            pscore += 0;
            cscore += 0;
            printf("THIS ROUND IS A DRAW\n"); 
        }
        else if (greater(playerchar,compchar) == 0)
        {
            cscore += 1;
            printf("COMPUTER HAS WON THIS ROUND\n"); 
        }
        printf("\nSCORES AFTER THIS ROUND\nYOUR SCORE = %d\nCOMPUTER SCORE = %d\n",pscore,cscore);
    }
    printf("FINAL SCORES ARE : \nYOUR SCORE = %d\nCOMPUTER SCORE = %d\n");
    if (pscore > cscore)
    {
        printf("\nYOU HAVE WON THE GAME\nGOOD JOB ! KEEP IT UP\n");
    }
    else if (pscore < cscore)
    {
        printf("\nCOMPUTER HAS WON THE GAME\nBETTER LUCK NEXT TIME\n");
    }
    else if (pscore = cscore)
    {
        printf("\nIT's A DRAW\nBETTER LUCK NEXT TIME\n");
    }
    
    return 0;
}