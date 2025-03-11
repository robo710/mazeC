//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAZESIZE 20
//#define WALL '#'
//#define ROAD ' '
//#define START 'S'
//#define EXIT 'E'
//
//char mazeboard[MAZESIZE][MAZESIZE];
//
//void generateMaze();
//void printMaze();
//
//int main()
//{
//    srand(time(NULL)); // seed for random number generation
//
//    generateMaze();
//    printMaze();
//
//    return 0;
//}
//
//void generateMaze()
//{
//    int i, j, randStartRow, randStartCol, randExitRow, randExitCol;
//
//    // initialize maze to all walls
//    for (i = 0; i < MAZESIZE; i++) {
//        for (j = 0; j < MAZESIZE; j++) {
//            mazeboard[i][j] = WALL;
//        }
//    }
//
//    // select random starting and exit positions
//    randStartRow = rand() % (MAZESIZE - 2) + 1;
//    randStartCol = rand() % (MAZESIZE - 2) + 1;
//    randExitRow = rand() % (MAZESIZE - 2) + 1;
//    randExitCol = rand() % (MAZESIZE - 2) + 1;
//
//    // set starting and exit positions
//    mazeboard[randStartRow][randStartCol] = START;
//    mazeboard[randExitRow][randExitCol] = EXIT;
//
//    // create random paths in the maze
//    int numPaths = 0;
//    while (numPaths < 100) {
//        int randRow = rand() % (MAZESIZE - 2) + 1;
//        int randCol = rand() % (MAZESIZE - 2) + 1;
//
//        if (mazeboard[randRow][randCol] == WALL ||
//            mazeboard[randRow][randCol] == START ||
//            mazeboard[randRow][randCol] == EXIT ||
//            mazeboard[randRow - 1][randCol] != WALL &&
//            mazeboard[randRow + 1][randCol] != WALL &&
//            mazeboard[randRow][randCol - 1] != WALL &&
//            mazeboard[randRow][randCol + 1] != WALL) 
//        {
//            mazeboard[randRow][randCol] = ROAD;
//            numPaths++;
//        }
//    }
//}
//
//void printMaze()
//{
//    int i, j;
//    for (i = 0; i < MAZESIZE; i++) {
//        for (j = 0; j < MAZESIZE; j++) {
//            printf("%c ", mazeboard[i][j]);
//        }
//        printf("\n");
//    }
//}
