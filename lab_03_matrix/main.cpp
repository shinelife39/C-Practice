/* ���� ��������� 2���� �迭�� ����� ����� ����, ����, ���� ���� ���α׷� */

#include <stdio.h>
#include <string.h>
#define SIZE 5

void printMtrx(int m[][SIZE], int size);
void fprintMtrx(FILE* fout, int mA[][SIZE], int size);
int initMtrx(FILE *fp, int m[][SIZE], int size);
void addMtrx(int mA[][SIZE], int mB[][SIZE], int mX[][SIZE], int size);
void subtractMtrx(int mA[][SIZE], int mB[][SIZE], int mX[][SIZE], int size);
void multiplyMtrx(int mA[][SIZE], int mB[][SIZE], int mX[][SIZE], int size);

int main() {
	FILE *fin = NULL;
	FILE *fout = NULL;

	int mA[SIZE][SIZE], mB[SIZE][SIZE],/* 2���� 5x5 ����� ������ �� �ִ� 2���� �迭*/
		mC[SIZE][SIZE], mD[SIZE][SIZE], mE[SIZE][SIZE];

	fin = fopen("input.txt", "r"); // �Է� �����Ͱ� ���Ե� �Է� ����

	if (fin == NULL) {
		printf("Error in input data file open !!\n");
		return 0;
	}

	fout = fopen("output.txt", "w"); // ��� ����� ������ ��� ������ ����

	if (fout == NULL) {
		printf("Error in output data file creation !!\n");
		return 0;
	}

	if (initMtrx(fin, mA, SIZE) == -1) {
		printf("Error in matrix initialization with input file");
	}
	if (initMtrx(fin, mB, SIZE) == -1) {
		printf("Error in matrix initialization with input file");
	}

	printMtrx(mA, SIZE);
}


int initMtrx(FILE *fp, int m[][SIZE], int size) { // �Է� ������ ���Ϸκ��� 25���� ���� �����͸� �о� 2���� �迭�� �ʱ�ȭ
	int i, j;

	if (fp == NULL) { // fp�� NULL�̸� ���� ó�� - �Է� ������ �� �� ����
		printf("Error in input data file open !!\n");
		return 0;
	}

	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			fscanf(fp, "%d", &m[i][j]);
			//printf("%d ", m[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	/*
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (fscanf(fp, "%d", m) != EOF) {
				//m[i][j] = m[0][0];
				m[i][j] = printf("%d ", m[0][0]);
			}
		}
		printf("\n");
	}
	printf("\n");
	*/
	return 0;
}

void printMtrx(int m[][SIZE], int size) {
	int i, j;
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (i == 0 & j == 0) {
				printf("%c%c", 0xa6, 0xa3);
				printf("%5d ", m[0][0]);
			}
			else if (i == 0 & j == 4) {
				printf("%5d ", m[0][4]);
				printf("%c%c", 0xa6, 0xa4);
			}
		}
	}
}