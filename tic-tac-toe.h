#ifndef __TIC_TAC_TOE_H__
#define __TIC_TAC_TOE_H__

void print_board(char *board);
void clear_input(void);
int read_number(int *number);
int check_move(char *board, int is_number, int pos);
void player_turn(char *board);
#endif 