#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

int jumpCounter;
int dinoX, dinoY;
int jumping;

void input() {
	if (_kbhit()) {
		switch (_getch()) {
		case ' ':
			if (dinoY == 10 && !jumping) {
				jumping = 1; // 開始跳躍
				jumpCounter = 10; // 設置跳躍計數器
			}
			break;
		case 'x':
			exit(0);
		}
	}
}