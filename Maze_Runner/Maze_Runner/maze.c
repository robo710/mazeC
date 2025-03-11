//#pragma region ���
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <Windows.h>
//#include <conio.h>
//#include <stdbool.h>
//
//#pragma endregion
//
//#pragma region Define
//
//#define MAZESIZE 28
//#define PLAYER '*'
//#define GOAL 'G'
//#define CIN GetStdHandle(STD_INPUT_HANDLE)
//#define COUT GetStdHandle(STD_OUTPUT_HANDLE)
//#define BLACK 0
//#define BLUE 1
//#define GREEN 2
//#define AQUA 3
//#define RED 4
//#define PURPLE 5
//#define YELLOW 6
//#define WHITE 7
//#define GRAY 8
//#define LIGHTBLUE 9
//#define LIGHTGREEN 10
//#define LIGHTAQUA 11
//#define LIGHTRED 12
//#define LIGHTPURPLE 13
//#define LIGHTYELLOW 14
//#define BRIGHTWHITE 15
//#define LEFT 75
//#define RIGHT 77
//#define UP 72
//#define DOWN 80
//#define ESC 27
//
//#pragma endregion
//
//#pragma region �Լ�����
//
//void mazeboard1();
//void mazeboard2();
//void mazeboard3();
//void difficulty();
//void easystage();
//void normalstage();
//void hardstage();
//void setColor(int color);
//void gotoxy(int x, int y);
//void mainTitleDraw(bool newGame);
//void subTitleDraw(bool newGame);
//void fillcolorset(int num);
//void Box();
//void explanation();
//
//#pragma endregion
//
//#pragma region ����
//int main()
//{
//	static int time = 0;
//	system("mode con cols=120 lines=30");
//	mainTitleDraw(true);
//	while (1) {
//		char start = _getch();
//		system("cls");
//		if (start == '\r') {
//			if (time == 0)
//			{
//				time++;
//				explanation();
//			}
//			else
//			{
//				difficulty();
//			}
//		}
//		else if (start == ESC)
//		{
//			printf("������ �����Ͽ����ϴ�.");
//			exit(1);
//		}
//		else
//		{
//			subTitleDraw(true);
//		}
//		
//	}
//}
//#pragma endregion
//
//#pragma region ��1
//void mazeboard1()
//{
//	clock_t start, finish;
//	double second;
//	start = clock();
//	int x = 0;
//	int y = 1;
//	char mazeboard[MAZESIZE][MAZESIZE] = {
//		{'@',PLAYER,'@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@'},
//		{'@',' ',' ',' ','@','@','@','@','@','@',' ',' ',' ',' ',' ',' ',' ',' ',' ','@'},
//		{'@',' ','@',' ',' ','@',' ',' ',' ','@','@','@','@',' ','@','@','@','@',' ','@'},
//		{'@',' ','@','@',' ',' ',' ','@',' ','@','@',' ',' ',' ',' ',' ','@',' ',' ','@'},
//		{'@',' ','@','@','@','@',' ','@',' ','@',' ',' ','@','@','@',' ','@','@',' ','@'},
//		{'@',' ',' ',' ',' ','@',' ','@',' ','@',' ','@','@',' ','@',' ',' ','@','@','@'},
//		{'@','@','@','@',' ','@','@','@','@','@',' ','@','@',' ','@','@',' ',' ','@','@'},
//		{'@',' ','@',' ',' ','@','@',' ','@',' ',' ','@',' ',' ','@','@','@',' ','@','@'},
//		{'@',' ',' ',' ','@','@',' ',' ','@',' ','@','@','@',' ',' ',' ','@',' ','@','@'},
//		{'@',' ','@','@','@','@',' ','@','@',' ',' ',' ',' ',' ','@',' ','@',' ','@','@'},
//		{'@',' ',' ','@',' ','@',' ','@','@',' ','@','@','@','@','@',' ',' ',' ',' ','@'},
//		{'@','@',' ','@',' ',' ',' ',' ',' ',' ','@',' ',' ','@',' ',' ','@','@',' ','@'},
//		{'@',' ',' ','@',' ','@','@','@',' ','@','@',' ','@','@',' ',' ',' ','@','@','@'},
//		{'@',' ','@','@',' ','@',' ','@',' ','@','@',' ','@',' ',' ','@',' ','@',' ',GOAL},
//		{'@',' ','@','@',' ','@',' ','@',' ','@','@',' ','@',' ','@','@',' ','@',' ','@'},
//		{'@',' ',' ','@',' ','@',' ','@',' ',' ','@',' ','@',' ','@','@',' ','@',' ','@'},
//		{'@','@',' ',' ',' ',' ',' ','@','@','@','@',' ','@',' ',' ',' ',' ',' ',' ','@'},
//		{'@',' ',' ','@','@','@',' ',' ',' ',' ',' ',' ','@',' ','@','@','@','@',' ','@'},
//		{'@','@',' ',' ',' ','@','@','@','@','@','@','@','@',' ',' ',' ',' ',' ',' ','@'},
//		{'@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@'}
//	};
//	while (1)
//	{
//		// �� �׸���
//		for (int i = 0; i < MAZESIZE; i++)
//		{
//			for (int j = 0; j < MAZESIZE; j++)
//			{
//				if (mazeboard[i][j] == PLAYER)
//				{
//					fillcolorset(LIGHTYELLOW);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else if (mazeboard[i][j] == GOAL)
//				{
//					fillcolorset(RED);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else if (mazeboard[i][j] == '@')
//				{
//					fillcolorset(AQUA);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else
//				{
//					fillcolorset(BLACK);
//					printf("%c ", mazeboard[i][j]);
//				}
//			}
//			printf("\n");
//		}
//		// ĳ���� �̵�
//		char go = _getch();
//		if (go == 'w' || go == 'W' || go == UP)
//		{
//			if (mazeboard[x - 1][y] == ' ' || mazeboard[x - 1][y] == GOAL)
//			{
//				x--;
//				mazeboard[x + 1][y] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 'a' || go == 'A' || go == LEFT)
//		{
//			if (mazeboard[x][y - 1] == ' ' || mazeboard[x][y - 1] == GOAL)
//			{
//				y--;
//				mazeboard[x][y + 1] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 's' || go == 'S' || go == DOWN)
//		{
//			if (mazeboard[x + 1][y] == ' ' || mazeboard[x + 1][y] == GOAL)
//			{
//				x++;
//				mazeboard[x - 1][y] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 'd' || go == 'D' || go == RIGHT)
//		{
//			if (mazeboard[x][y+1] == ' ' || mazeboard[x][y + 1] == GOAL)
//			{
//				y++;
//				mazeboard[x][y- 1] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == ESC)
//		{
//			system("cls");
//			difficulty();
//		}
//		// ĳ���Ͱ� ���������� �����ߴ°�?
//		if (mazeboard[13][19] == PLAYER)
//		{
//			finish = clock();
//			second = (double)(finish - start) / CLOCKS_PER_SEC;
//			while (1)
//			{
//				for (int i = 0; i < MAZESIZE; i++)
//				{
//					for (int j = 0; j < MAZESIZE; j++)
//					{
//						if (mazeboard[i][j] == PLAYER)
//						{
//							fillcolorset(LIGHTYELLOW);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else if (mazeboard[i][j] == GOAL)
//						{
//							fillcolorset(LIGHTBLUE);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else if (mazeboard[i][j] == '@')
//						{
//							fillcolorset(AQUA);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else
//						{
//							fillcolorset(BLACK);
//							printf("%c ", mazeboard[i][j]);
//						}
//					}
//					printf("\n");
//				}
//				setColor(BRIGHTWHITE);
//				printf("%.2f�� �Դϴ�.", second);
//				printf("���ϵ帳�ϴ�.\n");
//				printf("MŰ�� ���� ����ȭ������ ���ư�����.");
//				char go = _getch();
//				gotoxy(0, 0);
//				if (go == 'm' || go == 'M')
//				{
//					system("cls");
//					main();
//				}
//				else
//				{
//					continue;
//				}
//			}
//		}
//		gotoxy(0, 0);
//	}
//}
//#pragma endregion
//
//#pragma region ��2
//void mazeboard2()
//{
//	clock_t start, finish;
//	double second;
//	start = clock();
//	int x = 0;
//	int y = 1;
//	char mazeboard[MAZESIZE][MAZESIZE] = {
//		{'@',PLAYER,'@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@'},
//		{'@',' ','@',' ',' ',' ',' ',' ',' ','@','@','@','@','@','@','@','@','@',' ','@'},
//		{'@',' ','@','@','@','@','@','@',' ',' ',' ',' ',' ',' ',' ',' ',' ','@',' ','@'},
//		{'@',' ',' ',' ',' ',' ',' ','@','@',' ','@','@','@','@','@','@',' ',' ',' ','@'},
//		{'@','@','@','@',' ','@',' ',' ','@',' ','@','@','@','@','@','@','@',' ','@','@'},
//		{'@',' ',' ',' ',' ','@',' ','@','@',' ','@',' ',' ',' ',' ','@','@',' ','@','@'},
//		{'@','@','@',' ','@',' ',' ','@','@',' ','@',' ','@','@',' ',' ',' ',' ',' ','@'},
//		{'@',' ','@',' ','@','@','@','@',' ',' ','@',' ','@','@','@','@','@','@',' ','@'},
//		{'@',' ',' ',' ',' ',' ',' ','@',' ','@','@',' ','@',' ','@',' ','@','@','@','@'},
//		{'@',' ','@','@','@','@',' ','@',' ','@','@',' ','@',' ',' ',' ',' ',' ','@','@'},
//		{'@','@','@','@',' ',' ',' ','@',' ',' ',' ',' ','@','@',' ','@','@',' ','@','@'},
//		{'@',' ',' ',' ',' ','@',' ','@','@',' ','@',' ',' ',' ',' ','@',' ',' ','@','@'},
//		{'@',' ','@',' ','@','@',' ','@',' ',' ','@',' ','@',' ','@','@',' ','@','@','@'},
//		{'@',' ','@',' ','@',' ',' ','@',' ','@','@','@','@','@','@',' ',' ',' ',' ','@'},
//		{'@',' ',' ',' ',' ',' ','@','@',' ','@',' ',' ',' ','@',' ',' ','@',' ','@','@'},
//		{'@','@',' ','@','@','@','@','@',' ','@','@',' ','@',' ',' ','@','@','@',' ','@'},
//		{'@',' ',' ',' ',' ',' ',' ',' ',' ',' ','@',' ',' ',' ',' ',' ',' ',' ',' ','@'},
//		{'@',' ','@','@',' ','@','@','@','@',' ','@','@','@','@','@','@','@',' ','@','@'},
//		{'@',' ','@','@',' ',' ',' ',' ','@',' ',' ',' ',' ',' ',' ',' ','@',' ',' ','@'},
//		{'@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@',GOAL,'@','@'}
//	};
//	while (1)
//	{
//		// �� �׸���
//		for (int i = 0; i < MAZESIZE; i++)
//		{
//			for (int j = 0; j < MAZESIZE; j++)
//			{
//				if (mazeboard[i][j] == PLAYER)
//				{
//					fillcolorset(LIGHTYELLOW);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else if (mazeboard[i][j] == GOAL)
//				{
//					fillcolorset(RED);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else if (mazeboard[i][j] == '@')
//				{
//					fillcolorset(LIGHTAQUA);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else
//				{
//					fillcolorset(BLACK);
//					printf("%c ", mazeboard[i][j]);
//				}
//			}
//			printf("\n");
//		}
//		// ĳ���� �̵�
//		char go = _getch();
//		if (go == 'w' || go == 'W' || go == UP)
//		{
//			if (mazeboard[x - 1][y] == ' ' || mazeboard[x - 1][y] == GOAL)
//			{
//				x--;
//				mazeboard[x + 1][y] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 'a' || go == 'A' || go == LEFT)
//		{
//			if (mazeboard[x][y - 1] == ' ' || mazeboard[x][y - 1] == GOAL)
//			{
//				y--;
//				mazeboard[x][y + 1] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 's' || go == 'S' || go == DOWN)
//		{
//			if (mazeboard[x + 1][y] == ' ' || mazeboard[x + 1][y] == GOAL)
//			{
//				x++;
//				mazeboard[x - 1][y] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 'd' || go == 'D' || go == RIGHT)
//		{
//			if (mazeboard[x][y + 1] == ' ' || mazeboard[x][y + 1] == GOAL)
//			{
//				y++;
//				mazeboard[x][y - 1] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == ESC)
//		{
//			system("cls");
//			difficulty();
//		}
//		// �÷��̾ ���� ������ �����ߴ°�
//		if (mazeboard[19][17] == PLAYER)
//		{
//			finish = clock();
//			second = (double)(finish - start) / CLOCKS_PER_SEC;
//			while (1)
//			{
//				for (int i = 0; i < MAZESIZE; i++)
//				{
//					for (int j = 0; j < MAZESIZE; j++)
//					{
//						if (mazeboard[i][j] == PLAYER)
//						{
//							fillcolorset(LIGHTYELLOW);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else if (mazeboard[i][j] == GOAL)
//						{
//							fillcolorset(LIGHTBLUE);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else if (mazeboard[i][j] == '@')
//						{
//							fillcolorset(LIGHTAQUA);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else
//						{
//							fillcolorset(BLACK);
//							printf("%c ", mazeboard[i][j]);
//						}
//					}
//					printf("\n");
//				}
//				setColor(BRIGHTWHITE);
//				printf("%.2f�� �Դϴ�.", second);
//				printf("���ϵ帳�ϴ�.\n");
//				printf("MŰ�� ���� ����ȭ������ ���ư�����.");
//				char go = _getch();
//				gotoxy(0, 0);
//				if (go == 'm' || go == 'M')
//				{
//					system("cls");
//					main();
//				}
//				else
//				{
//					continue;
//				}
//			}
//		}
//		gotoxy(0, 0);
//	}
//}
//#pragma endregion
//
//#pragma region ��3
//void mazeboard3()
//{
//	clock_t start, finish;
//	double second;
//	start = clock();
//	int x = 23;
//	int y = 0;
//	char mazeboard[MAZESIZE][MAZESIZE] = {
//		{'@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@'},
//		{'@',' ','@','@',' ','@',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','@','@',' ',' ','@'},
//		{'@',' ',' ',' ',' ','@',' ','@','@','@','@','@',' ','@',' ','@','@',' ','@',' ','@',' ',' ','@','@'},
//		{'@',' ','@','@',' ','@',' ','@',' ',' ',' ',' ',' ','@',' ','@','@',' ','@',' ','@','@',' ','@','@'},
//		{'@',' ','@','@',' ','@',' ','@','@','@','@','@',' ','@',' ','@','@',' ',' ',' ',' ',' ',' ',' ','@'},
//		{'@',' ',' ','@',' ','@',' ',' ',' ',' ','@','@',' ','@',' ',' ','@','@','@','@','@','@','@',' ','@'},
//		{'@','@',' ','@',' ','@','@','@','@',' ','@','@',' ','@','@',' ',' ','@',' ',' ',' ',' ',' ',' ','@'},
//		{'@','@',' ','@',' ',' ',' ',' ',' ',' ','@','@',' ',' ','@',' ','@','@',' ','@','@',' ','@',' ','@'},
//		{'@','@',' ','@','@','@',' ','@','@',' ','@','@','@',' ','@',' ',' ','@',' ','@','@',' ','@',' ','@'},
//		{'@',' ',' ','@','@',' ',' ','@',' ',' ','@',' ','@',' ','@','@','@','@',' ','@','@',' ','@',' ','@'},
//		{'@',' ',' ',' ',' ',' ','@','@',' ','@','@',' ','@',' ',' ',' ','@','@',' ','@','@',' ','@',' ','@'},
//		{'@',' ','@','@',' ','@','@',' ',' ','@',' ',' ','@','@','@',' ','@','@',' ','@','@',' ','@','@','@'},
//		{'@',' ',' ',' ',' ',' ',' ',' ','@','@',' ','@','@','@','@',' ','@','@',' ','@','@',' ',' ',' ','@'},
//		{'@',' ','@','@',' ','@','@',' ','@',' ',' ',' ',' ','@','@',' ','@','@',' ','@','@','@','@',' ','@'},
//		{'@',' ','@',' ',' ',' ','@',' ','@',' ','@','@',' ',' ','@',' ','@','@',' ','@',' ',' ',' ',' ','@'},
//		{'@',' ','@','@','@','@','@',' ','@',' ','@','@','@',' ','@',' ',' ',' ',' ','@',' ','@','@',' ','@'},
//		{'@',' ','@','@',' ',' ',' ',' ',' ',' ',' ',' ','@',' ','@','@','@','@',' ','@','@','@','@',' ','@'},
//		{'@',' ','@','@',' ','@','@','@','@',' ','@',' ','@',' ','@','@','@',' ',' ',' ','@',' ',' ',' ','@'},
//		{'@',' ','@','@',' ','@',' ','@','@',' ','@',' ','@',' ',' ',' ','@','@','@','@','@',' ','@','@','@'},
//		{'@',' ','@','@',' ','@',' ',' ',' ',' ','@',' ','@',' ','@','@','@',' ',' ',' ','@',' ','@','@','@'},
//		{'@',' ',' ',' ',' ','@',' ','@',' ','@','@',' ',' ',' ','@','@',' ',' ','@','@','@',' ','@','@','@'},
//		{'@',' ','@',' ','@','@',' ','@',' ','@',' ',' ','@','@','@','@',' ','@','@',' ',' ',' ',' ',' ','@'},
//		{'@',' ','@',' ','@',' ',' ',' ',' ','@',' ','@','@','@',' ',' ',' ','@','@',' ','@','@','@','@','@'},
//		{PLAYER,' ','@',' ',' ',' ','@','@','@','@',' ',' ',' ',' ',' ','@',' ',' ','@',' ',' ',' ',' ',' ','@'},
//		{'@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@','@',GOAL,'@'}
//	};
//	while (1)
//	{
//		// �� �׸���
//		for (int i = 0; i < MAZESIZE; i++)
//		{
//			for (int j = 0; j < MAZESIZE; j++)
//			{
//				if (mazeboard[i][j] == PLAYER)
//				{
//					fillcolorset(LIGHTYELLOW);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else if (mazeboard[i][j] == GOAL)
//				{
//					fillcolorset(LIGHTBLUE);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else if (mazeboard[i][j] == '@')
//				{
//					fillcolorset(LIGHTPURPLE);
//					printf("%c ", mazeboard[i][j]);
//				}
//				else
//				{
//					fillcolorset(BLACK);
//					printf("%c ", mazeboard[i][j]);
//				}
//			}
//			printf("\n");
//		}
//		// ĳ���� �̵�
//		char go = _getch();
//		if (go == 'w' || go == 'W' || go == UP)
//		{
//			if (mazeboard[x - 1][y] == ' ' || mazeboard[x - 1][y] == GOAL)
//			{
//				x--;
//				mazeboard[x + 1][y] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 'a' || go == 'A' || go == LEFT)
//		{
//			if (mazeboard[x][y - 1] == ' ' || mazeboard[x][y - 1] == GOAL)
//			{
//				y--;
//				mazeboard[x][y + 1] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 's' || go == 'S' || go == DOWN)
//		{
//			if (mazeboard[x + 1][y] == ' ' || mazeboard[x + 1][y] == GOAL)
//			{
//				x++;
//				mazeboard[x - 1][y] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == 'd' || go == 'D' || go == RIGHT)
//		{
//			if (mazeboard[x][y + 1] == ' ' || mazeboard[x][y + 1] == GOAL)
//			{
//				y++;
//				mazeboard[x][y - 1] = ' ';
//				mazeboard[x][y] = PLAYER;
//			}
//		}
//		else if (go == ESC)
//		{
//			system("cls");
//			difficulty();
//		}
//		// �÷��̾ ���� ������ �����ߴ°�
//		
//		if (mazeboard[24][23] == PLAYER)
//		{
//			finish = clock();
//			second = (double)(finish - start) / CLOCKS_PER_SEC;
//			while (1)
//			{
//				for (int i = 0; i < MAZESIZE; i++)
//				{
//					for (int j = 0; j < MAZESIZE; j++)
//					{
//						if (mazeboard[i][j] == PLAYER)
//						{
//							fillcolorset(LIGHTYELLOW);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else if (mazeboard[i][j] == GOAL)
//						{
//							fillcolorset(LIGHTBLUE);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else if (mazeboard[i][j] == '@')
//						{
//							fillcolorset(LIGHTPURPLE);
//							printf("%c ", mazeboard[i][j]);
//						}
//						else
//						{
//							fillcolorset(BLACK);
//							printf("%c ", mazeboard[i][j]);
//						}
//					}
//					printf("\n");
//				}
//				setColor(BRIGHTWHITE);
//				printf("%.2f�� �Դϴ�.", second);
//				printf("���ϵ帳�ϴ�.\n");
//				printf("MŰ�� ���� ����ȭ������ ���ư�����.");
//				char go = _getch();
//				gotoxy(0, 0);
//				if (go == 'm' || go == 'M')
//				{
//					system("cls");
//					main();
//				}
//				else
//				{
//					continue;
//				}
//			}
//		}
//		gotoxy(0, 0);
//	}
//}
//#pragma endregion
//
//#pragma region ���Ӽ���
//void explanation()
//{
//		Box();
//		setColor(WHITE);
//		gotoxy(3, 1);
//		printf("�̵� : WASD �Ǵ� ����Ű");
//		gotoxy(3, 2);
//		printf("�޴��� ������ : ESC");
//		gotoxy(3, 3);
//		printf("ȭ���� �ǵ帮�� �����ּ���.");
//		gotoxy(3, 4);
//		printf("����� �÷��̾ �������� ������������ ���� Ŭ���� �Դϴ�.");
//		gotoxy(3, 25);
//		printf("������ �� �����̴ٸ� ����Ű�� ���� ������ �����ϼ���");
//		gotoxy(3, 26);
//		printf("������ �ѹ��� ���ɴϴ�.");
//		char play = _getch();
//		switch (play)
//		{
//		case '\r':
//			system("cls");
//			difficulty();
//		default:
//			explanation();
//		}
//}
//#pragma endregion
//
//#pragma region ���̵�������
//void difficulty()
//{
//	while (1)
//	{
//		Box();
//		gotoxy(50, 13);
//		setColor(LIGHTAQUA);
//		printf("���̵��� �����ּ���\n");
//		gotoxy(50, 14);
//		setColor(LIGHTGREEN);
//		printf("���� : 1");
//		gotoxy(50, 15);
//		setColor(LIGHTBLUE);
//		printf("���� : 2");
//		gotoxy(50, 16);
//		setColor(LIGHTPURPLE);
//		printf("����� : 3");
//		char go = _getch();
//		system("cls");
//		switch (go)
//		{
//		case '1':
//		{
//			system("cls");
//			easystage();
//			return 1;
//		}
//		case '2':
//		{
//			system("cls");
//			normalstage();
//			return 1;
//		}
//		case '3':
//		{
//			system("cls");
//			hardstage();
//			return 1;
//		}
//		case ESC:
//			main();
//		default:
//		{
//			continue;
//		}
//		}
//	}
//}
//#pragma endregion
//
//#pragma region ����
//void Box()
//{
//	fillcolorset(WHITE);
//	for (int i = 0; i < 118; i++)
//	{
//		gotoxy(i, 0);
//		printf("  ");
//		gotoxy(i, 0);
//		printf("  ");
//	}
//	for (int i = 0; i < 30; i++)
//	{
//		gotoxy(0, i);
//		printf("  ");
//		gotoxy(118, i);
//		printf("  ");
//	}
//	for(int i = 0; i < 118; i++)
//	{
//		gotoxy(i, 29);
//		printf("  ");
//		gotoxy(i, 29);
//		printf("  ");
//	}
//}
//#pragma endregion
//
//#pragma region �����Լ�
//void setColor(int color) 
//{
//	SetConsoleTextAttribute(COUT, color);
//}
//#pragma endregion
//
//#pragma region �����Լ�
//void fillcolorset(int num)
//{
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), num | (num << 4));
//}
//#pragma endregion
//
//#pragma region gotoxy�Լ�
//void gotoxy(int x, int y)
//{
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//#pragma endregion
//
//#pragma region Ÿ��Ʋȭ��
//void mainTitleDraw(bool newGame)
//{
//	setColor(LIGHTAQUA);
//	char gameLogo[10][56] = {
//	"��      ��         ��         ������     ������",
//	"���  ���       ��  ��              ��      ��        ",
//	"��  ��  ��     ��      ��         ��         �����  ",
//	"��  ��  ��     ������      ��            ��        ",
//	"��      ��     ��      ��     ������     ������",
//
//	"  �����         ��         ��      ��     ������",
//	"��               ��  ��       ���  ���     ��        ",
//	"��  ����     ��      ��     ��  ��  ��     �����  ",
//	"��      ��     ������     ��  ��  ��     ��        ",
//	"  �����     ��      ��     ��      ��     ������"
//	};
//
//	if (newGame == true) {
//		for (int i = 0; i < 5; i++) {
//			gotoxy(32, (i + 6));
//			for (int j = 0; j < 56; j++) {
//				printf("%c", gameLogo[i][j]);
//			}
//			Sleep(100);
//		}
//		Sleep(200);
//		for (int i = 0; i < 5; i++) {
//			gotoxy(32, (i + 12));
//			for (int j = 0; j < 56; j++) {
//				printf("%c", gameLogo[i + 5][j]);
//			}
//			Sleep(100);
//		}
//		Sleep(200);
//	}
//	else {
//		for (int i = 0; i < 5; i++) {
//			gotoxy(32, (i + 6));
//			for (int j = 0; j < 56; j++) {
//				printf("%c", gameLogo[i][j]);
//			}
//		}
//		for (int i = 0; i < 5; i++) {
//			gotoxy(32, (i + 12));
//			for (int j = 0; j < 56; j++) {
//				printf("%c", gameLogo[i + 5][j]);
//			}
//		}
//	}
//	setColor(BRIGHTWHITE);
//	gotoxy(49, 20);
//	printf("-Press Enter to start-");
//	gotoxy(51, 23);
//	printf("Press ESC to quit");
//}
//#pragma endregion
//
//#pragma region ����ȭ��
//void subTitleDraw(bool newGame)
//{
//	setColor(LIGHTAQUA);
//	char gameLogo[10][56] = {
//	"��      ��         ��         ������     ������",
//	"���  ���       ��  ��              ��      ��        ",
//	"��  ��  ��     ��      ��         ��         �����  ",
//	"��  ��  ��     ������      ��            ��        ",
//	"��      ��     ��      ��     ������     ������",
//
//	"  �����         ��         ��      ��     ������",
//	"��               ��  ��       ���  ���     ��        ",
//	"��  ����     ��      ��     ��  ��  ��     �����  ",
//	"��      ��     ������     ��  ��  ��     ��        ",
//	"  �����     ��      ��     ��      ��     ������"
//	};
//
//	if (newGame == true) {
//		for (int i = 0; i < 5; i++) {
//			gotoxy(32, (i + 6));
//			for (int j = 0; j < 56; j++) {
//				printf("%c", gameLogo[i][j]);
//			}
//		}
//		for (int i = 0; i < 5; i++) {
//			gotoxy(32, (i + 12));
//			for (int j = 0; j < 56; j++) {
//				printf("%c", gameLogo[i + 5][j]);
//			}
//		}
//	}
//	else {
//		for (int i = 0; i < 5; i++) {
//			gotoxy(32, (i + 6));
//			for (int j = 0; j < 56; j++) {
//				printf("%c", gameLogo[i][j]);
//			}
//		}
//		for (int i = 0; i < 5; i++) {
//			gotoxy(32, (i + 12));
//			for (int j = 0; j < 56; j++) {
//				printf("%c", gameLogo[i + 5][j]);
//			}
//		}
//	}
//	setColor(BRIGHTWHITE);
//	gotoxy(49, 20);
//	printf("-Press Enter to start-");
//	gotoxy(51, 23);
//	printf("Press ESC to quit");
//}
//#pragma endregion
//
//#pragma region EasyStage
//void easystage()
//{
//	while (1)
//	{
//		Box();
//		setColor(GREEN);
//		gotoxy(3, 1);
//		printf("1 STAGE\n");
//		gotoxy(3, 2);
//		printf("2 STAGE\n");
//		gotoxy(3, 3);
//		printf("3 STAGE\n");
//		gotoxy(3, 4);
//		printf("4 STAGE\n");
//		gotoxy(3, 5);
//		printf("5 STAGE\n");
//		char go = _getch();
//		switch (go)
//		{
//		case '1':
//		{
//			system("cls");
//			mazeboard1();
//			return 1;
//		}
//		case '2':
//		{
//			system("cls");
//			mazeboard2();
//			return 1;
//		}
//		case ESC:
//		{
//			system("cls");
//			difficulty();
//		}
//		default:
//		{
//			continue;
//		}
//		}
//	}
//}
//#pragma endregion
//
//#pragma region NormalStage
//void normalstage()
//{
//	while (1)
//	{
//		Box();
//		setColor(LIGHTBLUE);
//		gotoxy(3, 1);
//		printf("1 STAGE\n");
//		gotoxy(3, 2);
//		printf("2 STAGE\n");
//		gotoxy(3, 3);
//		printf("3 STAGE\n");
//		gotoxy(3, 4);
//		printf("4 STAGE\n");
//		gotoxy(3, 5);
//		printf("5 STAGE\n");
//		char go = _getch();
//		switch (go)
//		{
//		case '1':
//		{
//		system("cls");
//		mazeboard3();
//		return 1;
//		}
//		case ESC:
//		{
//			system("cls");
//			difficulty();
//		}
//		default:
//		{
//			continue;
//		}
//		}
//	}
//}
//#pragma endregion
//
//#pragma region HardStage
//void hardstage()
//{
//	while (1)
//	{
//		Box();
//		setColor(LIGHTPURPLE);
//		gotoxy(3, 1);
//		printf("1 STAGE\n");
//		gotoxy(3, 2);
//		printf("2 STAGE\n");
//		gotoxy(3, 3);
//		printf("3 STAGE\n");
//		gotoxy(3, 4);
//		printf("4 STAGE\n");
//		gotoxy(3, 5);
//		printf("5 STAGE\n");
//		char go = _getch();
//		switch (go)
//		{
//		case '1':
//		{
//			return 1;
//		}
//		case ESC:
//		{
//			system("cls");
//			difficulty();
//		}
//		default:
//		{
//			continue;
//		}
//		}
//	}
//}
//#pragma endregion