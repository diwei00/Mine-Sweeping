#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT_1 20
void initboard(char board[ROWS][COLS], int rows, int cols,char set);
void display_board(char board[ROWS][COLS], int row, int col);
void set_main(char board[ROWS][COLS],int row, int col);
void find_board(char main[ROWS][COLS], char show[ROWS][COLS], int row, int col);
int main_count(char main[ROWS][COLS], int row, int col);
#include <stdlib.h>
#include <time.h>
