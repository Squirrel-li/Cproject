#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

int obstacleX, obstacleY;

void drawObstacle() {
	gotoxy(obstacleX, obstacleY);
	printf("O");
}