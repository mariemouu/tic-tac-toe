#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "tic-tac-toe.h"

int main(void)
{
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    int status = 0;

    while (status == 0)
    {
        system("clear");
        print_board(board);
        print_positions();
        player_turn(board);
        status = game_status(board);
        if (status == 0)
        {
            computer_turn(board);
            sleep(1);
            status = game_status(board);
        }
    }
    system("clear");
    print_board(board);
    if (status == 1)
    {
        printf("Bravo, tu as gagné !\n");
    }
    if (status == 2)
    {
        printf("L'ordinateur a gagné !\n");
    }
    if (status == 3)
    {
        printf("Match nul !\n");
    }
    exit(0);
}