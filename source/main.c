#include <stdio.h>
#include <conio.h>
#include <windows.h>

int dinoX, dinoY;         // ���s���y��
int obstacleX, obstacleY; // ��ê�����y��Y�b
int floorY;               // �a�O��Y�y��
int score;
int jumpCounter;           // ���D�p�ƾ�
int jumping;               // ���D�лx


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
		Sleep(100); // ����C���t��
	}

	return 0;
}