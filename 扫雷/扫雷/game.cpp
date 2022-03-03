#include "game.h"
void initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] =  set ;
		}
	}
}
void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");

	}

}

void set_main(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT_1;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int main_count(char main[ROWS][COLS], int x, int y)
{
	return main[x + 1][y] +
		main[x - 1][y - 1] +
		main[x][y - 1] +
		main[x + 1][y - 1] +
		main[x + 1][y] +
		main[x + 1][y + 1] +
		main[x][y + 1] +
		main[x - 1][y + 1] - 8 * '0';

}
void find_board(char main[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-COUNT_1)
	{
		printf("ÇëÊäÈëÄãµÄ×ø±ê£º\n");
		scanf_s("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (main[x][y] == '1')
			{
				printf("GAME OVER Äã±»Õ¨ËÀÁË\n");
				display_board(main, row, col);
				break;
			}
			else
			{
				int count = main_count(main, x, y);
				show[x][y] = count + '0'; 
				display_board(show, row, col);
				win++;
			}
		}
		else
		{
			printf("ÊäÈë´íÎó£¬ÇëÖØÐÂÊäÈë£º\n");
		}
	}
	if (win == row * col - COUNT_1)
	{
		printf("¹§Ï²Äã£¬ÅÅÀ×³É¹¦\n");
	}
}





