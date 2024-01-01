#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

void drawObstacle(int obstacleX, int obstacleY) {
	gotoxy(obstacleX, obstacleY);
	printf("O");
}