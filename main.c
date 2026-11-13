#include <stdlib.h>
#include "tic-tac-toe.h"

int main(void)
{
    char board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    board[2] = 'O';
    print_board(board);
    player_turn(board);
    print_board(board);
    exit(0);
}