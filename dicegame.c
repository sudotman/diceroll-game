#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    srand(time(NULL));
    int i;
    int diceroll1;
    int diceroll2;
    int diceroll3;
    int loop;
    char choice;
    int ok1;
    int ok2;
    int ok3;
    int sumOld;
    int sumNew;

    printf("Welcome to the Dice game! You can play this upto 4 times. \n \n");
    for (loop=1;loop<=4;loop++)
    {

    printf("\nEnter 1 to roll the dice \n");
    scanf(" %d", &ok1);

    if (ok1==1)
    {
        diceroll1= (rand()%6) + 1;
        printf("\nYour first roll is %d \n \n", diceroll1);
    }
    else
    {
        printf("\nYou suck at following instructions \n");
        break;
    }

    printf("\nEnter 1 to roll another dice \n");
    scanf(" %d", &ok2);

    if (ok2==1)
    {
        diceroll2= (rand()%6) + 1;
        printf("Your roll is %d \n \n", diceroll2);
    }
    else
    {
        printf("You suck at following instructions \n");
        break;
    }

    printf("\nEnter 1 to roll another dice \n");
    scanf(" %d", &ok3);

    if (ok3==1)
    {
        diceroll3= (rand()%6) + 1;
        printf("Your roll is %d \n \n", diceroll3);
    }
    else
    {
        printf("You suck at following instructions \n");
        break;
    }

    sumOld=diceroll1+diceroll2+diceroll3;
    printf("The sum of your dice rolls is %d \n \n", sumOld);

    printf("What do you think the next roll sum will be? \n");
    printf("Enter H if you think higher, Enter L if you think lower, Enter S if you think same \n");

    scanf(" %c", &choice);
    choice=toupper(choice);

    printf("Enter 1 to roll the dice \n");
    scanf(" %d", &ok1);

    if (ok1==1)
    {
        diceroll1= (rand()%6) + 1;
        printf("Your roll is %d \n \n", diceroll1);
    }
    else
    {
        printf("You suck at following instructions \n \n");
        break;
    }

    printf("Enter 1 to roll another dice \n");
    scanf(" %d", &ok1);

    if (ok2==1)
    {
        diceroll2= (rand()%6) + 1;
        printf("Your roll is %d \n \n", diceroll2);
    }
    else
    {
        printf("You suck at following instructions \n");
        break;
    }

    printf("Enter 1 to roll another dice \n \n");
    scanf(" %d", &ok1);

    if (ok3==1)
    {
        diceroll2= (rand()%6) + 1;
        printf("Your roll is %d \n \n", diceroll3);
    }
    else
    {
        printf("You suck at following instructions \n");
        break;
    }

    sumNew=diceroll1+diceroll2+diceroll3;
    printf("The sum of your dice rolls is %d \n \n", sumNew);

    switch(choice)
    {
        case 'L' : if(sumNew<sumOld)
        {
            printf("Correct, damn youre good at this. \n");
        }
        if(sumNew>sumOld)
        {
            printf("youre dead wrong lmao \n");
        }
        if(sumNew==sumOld)
        {
            printf("sorry bud youre wrong \n");
        }
        break;

        case 'H' : if(sumNew>sumOld)
        {
            printf("Correct, damn youre good at this. \n");
        }
        if(sumNew<sumOld)
        {
            printf("youre dead wrong lmao \n");
        }
        if(sumNew==sumOld)
        {
            printf("sorry bud youre wrong \n");
        }
        break;

        case 'S' : if(sumNew==sumOld)
        {
            printf("Correct, damn youre good at this. \n");
        }
        if(sumNew<sumOld)
        {
            printf("youre dead wrong lmao \n");
        }
        if(sumNew>sumOld)
        {
            printf("sorry bud youre wrong \n");
        }
        break;

        default : printf("type correctly my nigga \n");
    }




    }
}
