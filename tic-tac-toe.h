#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__

void print_board(char *board);
void clear_input(void);
int read_number(int *number);
int check_move(char *board, int is_number, int pos);
void player_turn(char *board);
void computer_turn(char *board);
int check_line(char *board, char symbol, int a, int b, int c);
int check_win(char *board, char symbol);
int is_full(char *board);
int game_status(char *board);
int computer_wins(char *board, char symbol);
void print_positions(void);

#endif