#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

int score;

void drawScore() {
	gotoxy(0, 0);
	printf("Score: %d", score);
}