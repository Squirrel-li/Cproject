#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

int dinoX, dinoY;

void drawDino() {
	gotoxy(dinoX, dinoY);
	printf("D");
}