#include <stdio.h>
#include <stdlib.h>

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