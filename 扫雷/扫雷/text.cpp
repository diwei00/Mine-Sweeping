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
	char main[ROWS][COLS] = { 0 };//���׵�
	char show[ROWS][COLS] = { 0 };//���˿���
	initboard(main, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');	
	//display_board(main, ROW, COL);
	display_board(show, ROW, COL);
	set_main(main, ROW, COL);//����
	//display_board(main, ROW, COL);
	find_board(main, show, ROW, COL);//����
}
void text()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��:\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
}
int main()
{

	text();
	return 0;
}