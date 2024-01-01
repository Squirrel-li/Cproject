#include <stdio.h>
#include <conio.h>
#include <windows.h>

int dinoX, dinoY;         // 恐龍的座標
int obstacleX, obstacleY; // 障礙物的座標Y軸
int floorY;               // 地板的Y座標
int score;
int jumpCounter;           // 跳躍計數器
int jumping;               // 跳躍標誌


int main() {
	setup();

	while (1) {
		system("cls");
		drawDino();
		drawObstacle();
		drawFloor();
		drawScore();
		input();
		logic();
		Sleep(100); // 控制遊戲速度
	}

	return 0;
}