#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

int floorY;

void drawFloor() {
	for (int i = 0; i < 80; i++) {
		gotoxy(i, floorY);
		printf("=");
	}
}