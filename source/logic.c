#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "../include/Cproject.h"

int dinoX, dinoY;         // ���s���y��
int obstacleX, obstacleY; // ��ê�����y��Y�b
int floorY;               // �a�O��Y�y��
int score;
int jumpCounter;           // ���D�p�ƾ�
int jumping;               // ���D�лx

void logic() {
	if (jumpCounter > 0) {
		dinoY -= 2; // ���s���D
		jumpCounter--;
	}
	else if (dinoY < 10) {
		dinoY++; // ���s�U��
	}

	if (jumpCounter == 0 && dinoY == 10) {
		jumping = 0; // ���D����
	}

	if (obstacleX > 0)
		obstacleX--; // ��ê���V������
	else {
		obstacleX = 50;
		obstacleY = 10 + rand() % 5;  // �H���ͦ�Y�b��m
		score++;
	}

	// �I���˴�
	if (dinoX == obstacleX && dinoY == obstacleY)
		exit(0);
	if (dinoY >= floorY)
		dinoY = floorY; // ����s��L�a�O
}