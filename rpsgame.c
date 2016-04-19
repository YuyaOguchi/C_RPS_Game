//  Yuya Oguchi
//  COEN 11 Lab1
//  12/10/2014
//  rpsgame.c
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    //init declarations
    int i = 1;
    int player1;
    int player2;
    int player1win = 0;
    int player2win = 0;
    int x;
    char input;

    //Write introduction to the rock paper scissor game
    printf("Welcome to Rock Paper Scissor game! \n");
    printf("Choose R for Rock, P for Paper, or S for Scissor \n");

    time_t t;
    srand ((int) time (&t));

    // rounds
    while (i <= 10){ //repeat 10 times
        printf("----------------------------\n");
        scanf("%s", &input); // read in the user input

        // convert user input into integer
        if (input == 'R' || input == 'r')
            player1 = 1;
        else if (input == 'P' || input == 'p')
            player1 = 2;
        else if (input == 'S' || input == 's')
            player1 = 3;
        else{
            player1 = 4;
        }

        //computer move(random integer will covert into RPS)
        player2 = rand() % 3 + 1;
        //PLayer did not pick right letter
        if (player1 == 4){
            printf("You did not choose Rock, Paper, or Scissor!\n");
            printf("You Lost this round\n");
            player1win = player1win;
            player2win += 1;
            //x += 1;
        }

        //for when user used rock
        else if (player1 == 1 && player2 == 1){
            printf("You chose Rock and computer chose Rock\n");
            printf("you tied\n");
            player1win = player1win;
            player2win = player2win;
        }else if (player1 == 1 && player2 == 2){
            printf("You chose Rock and computer chose Paper\n");
            printf("you Lost\n");
            player1win = player1win;
            player2win += 1;
            //x += 1;
        }else if (player1 == 1 && player2 == 3){
            printf("You chose Rock and computer chose Scissor\n");
            printf("you Won\n");
            player1win += 1;
            player2win = player2win;
        }

        //for when player used paper

        else if (player1 == 2 && player2 == 1){
            printf("You chose Paper and computer chose Rock\n");
            printf("you Won\n");
            player1win += 1;
            player2win = player2win;
        }else if (player1 == 2 && player2 == 2){
            printf("You chose Paper and computer chose Paper\n");
            printf("you Tied\n");
            player1win = player1win;
            player2win = player2win;
        }else if (player1 == 2 && player2 == 3){
            printf("You chose Paper and computer chose Scissor\n");
            printf("you Lost\n");
            player1win = player1win;
            player2win += 1;
            //x += 1;
        }

        //for when player used scissor
        else if (player1 == 3 && player2 == 1){
            printf("You chose Scissor and computer chose Rock\n");
            printf("you Lost\n");
            player1win = player1win;
            player2win += 1;
            //x += 1;
        }else if (player1 == 3 && player2 == 2){
            printf("You chose Scissor and computer chose Paper\n");
            printf("you Won\n");
            player1win += 1;
            player2win = player2win;
        }else if (player1 == 3 && player2 == 3){
            printf("You chose Scissor and computer chose Scissor\n");
            printf("you Tied\n");
            player1win = player1win;
            player2win = player2win;
        }
        //increment for next round
        i++;
        //display number of wins
        printf("Player1 :%d\n", player1win);
        printf("Player2 :%d\n", player2win);
    }

    //show results
    printf("\n\n\nThe result for the game:\n");
    printf("Wins\n");
    printf("Player1 :%d\n", player1win);
    printf("Player2 :%d\n", player2win);
    if (player1win > player2win)
        printf("You Win!\n");
    else if (player1win < player2win)
        printf("You lost\n");
    else printf("You Tied\n");

    return 0;
}
