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

void setup() {
	dinoX = 10;
	dinoY = 10;
	obstacleX = 50;
	obstacleY = 10;  // �T�wY�b��m
	floorY = 12;
	score = 0;
	jumpCounter = 0;
	jumping = 0;
}