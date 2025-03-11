//#pragma region 헤더
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
//#pragma region 함수선언
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
//#pragma region 메인
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
//			printf("게임을 종료하였습니다.");
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
//#pragma region 맵1
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
//		// 맵 그리기
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
//		// 캐릭터 이동
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
//		// 캐릭터가 골인지점에 도착했는가?
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
//				printf("%.2f초 입니다.", second);
//				printf("축하드립니다.\n");
//				printf("M키를 눌러 메인화면으로 돌아가세요.");
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
//#pragma region 맵2
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
//		// 맵 그리기
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
//		// 캐릭터 이동
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
//		// 플레이어가 골인 지점에 도착했는가
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
//				printf("%.2f초 입니다.", second);
//				printf("축하드립니다.\n");
//				printf("M키를 눌러 메인화면으로 돌아가세요.");
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
//#pragma region 맵3
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
//		// 맵 그리기
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
//		// 캐릭터 이동
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
//		// 플레이어가 골인 지점에 도착했는가
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
//				printf("%.2f초 입니다.", second);
//				printf("축하드립니다.\n");
//				printf("M키를 눌러 메인화면으로 돌아가세요.");
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
//#pragma region 게임설명
//void explanation()
//{
//		Box();
//		setColor(WHITE);
//		gotoxy(3, 1);
//		printf("이동 : WASD 또는 방향키");
//		gotoxy(3, 2);
//		printf("메뉴로 나가기 : ESC");
//		gotoxy(3, 3);
//		printf("화면은 건드리지 말아주세요.");
//		gotoxy(3, 4);
//		printf("노란색 플레이어를 움직여서 도착지점까지 가면 클리어 입니다.");
//		gotoxy(3, 25);
//		printf("설명을 다 읽으셨다면 엔터키를 눌러 게임을 시작하세요");
//		gotoxy(3, 26);
//		printf("설명은 한번만 나옵니다.");
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
//#pragma region 난이도설정부
//void difficulty()
//{
//	while (1)
//	{
//		Box();
//		gotoxy(50, 13);
//		setColor(LIGHTAQUA);
//		printf("난이도를 정해주세요\n");
//		gotoxy(50, 14);
//		setColor(LIGHTGREEN);
//		printf("쉬움 : 1");
//		gotoxy(50, 15);
//		setColor(LIGHTBLUE);
//		printf("보통 : 2");
//		gotoxy(50, 16);
//		setColor(LIGHTPURPLE);
//		printf("어려움 : 3");
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
//#pragma region 상자
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
//#pragma region 색깔함수
//void setColor(int color) 
//{
//	SetConsoleTextAttribute(COUT, color);
//}
//#pragma endregion
//
//#pragma region 배경색함수
//void fillcolorset(int num)
//{
//	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), num | (num << 4));
//}
//#pragma endregion
//
//#pragma region gotoxy함수
//void gotoxy(int x, int y)
//{
//	COORD pos = { x,y };
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
//}
//#pragma endregion
//
//#pragma region 타이틀화면
//void mainTitleDraw(bool newGame)
//{
//	setColor(LIGHTAQUA);
//	char gameLogo[10][56] = {
//	"□      □         □         □□□□□     □□□□□",
//	"□□  □□       □  □              □      □        ",
//	"□  □  □     □      □         □         □□□□  ",
//	"□  □  □     □□□□□      □            □        ",
//	"□      □     □      □     □□□□□     □□□□□",
//
//	"  □□□□         □         □      □     □□□□□",
//	"□               □  □       □□  □□     □        ",
//	"□  □□□     □      □     □  □  □     □□□□  ",
//	"□      □     □□□□□     □  □  □     □        ",
//	"  □□□□     □      □     □      □     □□□□□"
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
//#pragma region 서브화면
//void subTitleDraw(bool newGame)
//{
//	setColor(LIGHTAQUA);
//	char gameLogo[10][56] = {
//	"□      □         □         □□□□□     □□□□□",
//	"□□  □□       □  □              □      □        ",
//	"□  □  □     □      □         □         □□□□  ",
//	"□  □  □     □□□□□      □            □        ",
//	"□      □     □      □     □□□□□     □□□□□",
//
//	"  □□□□         □         □      □     □□□□□",
//	"□               □  □       □□  □□     □        ",
//	"□  □□□     □      □     □  □  □     □□□□  ",
//	"□      □     □□□□□     □  □  □     □        ",
//	"  □□□□     □      □     □      □     □□□□□"
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