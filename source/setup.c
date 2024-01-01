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

void setup() {
	dinoX = 10;
	dinoY = 10;
	obstacleX = 50;
	obstacleY = 10;  // 固定Y軸位置
	floorY = 12;
	score = 0;
	jumpCounter = 0;
	jumping = 0;
}