#include "game.h"
void menu()
{
	printf("**************************************\n");
	printf("*******       1.play           *******\n");
	printf("*******       0.exit           *******\n");
	printf("**************************************\n");
}
void game()
{
	char main[ROWS][COLS] = { 0 };//埋雷的
	char show[ROWS][COLS] = { 0 };//给人看的
	initboard(main, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');	
	//display_board(main, ROW, COL);
	display_board(show, ROW, COL);
	set_main(main, ROW, COL);//埋雷
	//display_board(main, ROW, COL);
	find_board(main, show, ROW, COL);//找雷
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("请选择:\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{

	text();
	return 0;
}