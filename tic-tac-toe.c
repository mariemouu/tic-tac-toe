#include <stdio.h>
#include <stdlib.h>
#include "tic-tac-toe.h"

void print_board(char *board)
{
    printf("\n");
    printf(" %c | %c | %c \n", board[0], board[1], board[2]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[3], board[4], board[5]);
    printf("-----------\n");
    printf(" %c | %c | %c \n", board[6], board[7], board[8]);
    printf("\n");
}

void clear_input(void)
{
    int c = getchar();

    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}

int read_number(int *number)
{
    int result = scanf("%d", number);

    if (result == EOF)
    {
        printf("\n");
        exit(0);
    }
    clear_input();
    if (result != 1)
    {
        return (0);
    }
    return (1);
}

int check_move(char *board, int is_number, int pos)
{
    if (is_number == 0)
    {
        printf("Ce n'est pas un nombre ! Choisis un nombre entre 0 et 8 : ");
        return (0);
    }
    if (pos < 0 || pos > 8)
    {
        printf("La case %d n'existe pas ! Choisis une case entre 0 et 8 : ", pos);
        return (0);
    }
    if (board[pos] != ' ')
    {
        printf("Chipeur, arrête de chiper ! La case %d est déjà prise. Choisis une case libre : ", pos);
        return (0);
    }
    return (1);
}

void player_turn(char *board)
{
    int pos = -1;
    int is_number;

    printf("À toi de jouer (X). Choisis une case de 0 à 8 : ");
    is_number = read_number(&pos);
    while (check_move(board, is_number, pos) == 0)
    {
        is_number = read_number(&pos);
    }
    board[pos] = 'X';
}

int check_line(char *board, char symbol, int a, int b, int c)
{
    if (board[a] == symbol && board[b] == symbol && board[c] == symbol)
    {
        return (1);
    }
    return (0);
}

int check_win(char *board, char symbol)
{
    if (check_line(board, symbol, 0, 1, 2) == 1
        || check_line(board, symbol, 3, 4, 5) == 1
        || check_line(board, symbol, 6, 7, 8) == 1
        || check_line(board, symbol, 0, 3, 6) == 1
        || check_line(board, symbol, 1, 4, 7) == 1
        || check_line(board, symbol, 2, 5, 8) == 1
        || check_line(board, symbol, 0, 4, 8) == 1
        || check_line(board, symbol, 2, 4, 6) == 1)
    {
        return (1);
    }
    return (0);
}

int is_full(char *board)
{
    int i = 0;

    while (i < 9)
    {
        if (board[i] == ' ')
        {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}

int game_status(char *board)
{
    if (check_win(board, 'X') == 1)
    {
        return (1);
    }
    if (check_win(board, 'O') == 1)
    {
        return (2);
    }
    if (is_full(board) == 1)
    {
        return (3);
    }
    return (0);
}

int computer_wins(char *board, char symbol)
{
    int i = 0;

    while (i < 9)
    {
        if (board[i] == ' ')
        {
            board[i] = symbol;
            if (check_win(board, symbol) == 1)
            {
                board[i] = ' ';
                return (i);
            }
            board[i] = ' ';
        }
        i = i + 1;
    }
    return (-1);
}

void computer_turn(char *board)
{
    int pos = computer_wins(board, 'O');

    if (pos == -1)
    {
        pos = computer_wins(board, 'X');
    }
    if (pos == -1 && board[4] == ' ')
    {
        pos = 4;
    }
    if (pos == -1)
    {
        pos = 0;
        while (board[pos] != ' ')
        {
            pos = pos + 1;
        }
    }
    board[pos] = 'O';
    printf("L'ordinateur joue la case %d.\n", pos);
}
void print_positions(void)
{
    printf("Numéros des cases :\n");
    printf(" 0 | 1 | 2 \n");
    printf(" 3 | 4 | 5 \n");
    printf(" 6 | 7 | 8 \n");
    printf("\n");
}