#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

int dinoX, dinoY;         // 恐龍的座標
int obstacleX, obstacleY; // 障礙物的座標Y軸
int floorY;               // 地板的Y座標
int score;
int jumpCounter;           // 跳躍計數器
int jumping;               // 跳躍標誌

void logic() {
	if (jumpCounter > 0) {
		dinoY -= 2; // 恐龍跳躍
		jumpCounter--;
	}
	else if (dinoY < 10) {
		dinoY++; // 恐龍下降
	}

	if (jumpCounter == 0 && dinoY == 10) {
		jumping = 0; // 跳躍結束
	}

	if (obstacleX > 0)
		obstacleX--; // 障礙物向左移動
	else {
		obstacleX = 50;
		obstacleY = 10 + rand() % 5;  // 隨機生成Y軸位置
		score++;
	}

	// 碰撞檢測
	if (dinoX == obstacleX && dinoY == obstacleY)
		exit(0);
	if (dinoY >= floorY)
		dinoY = floorY; // 防止恐龍穿過地板
}