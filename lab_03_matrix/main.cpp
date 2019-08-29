/* 파일 입출력으로 2차원 배열을 사용한 행렬의 덧셈, 뺄셈, 곱셈 연산 프로그램 */

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

	int mA[SIZE][SIZE], mB[SIZE][SIZE],/* 2개의 5x5 행렬을 저장할 수 있는 2차원 배열*/
		mC[SIZE][SIZE], mD[SIZE][SIZE], mE[SIZE][SIZE];

	fin = fopen("input.txt", "r"); // 입력 데이터가 포함된 입력 파일

	if (fin == NULL) {
		printf("Error in input data file open !!\n");
		return 0;
	}

	fout = fopen("output.txt", "w"); // 출력 결과를 저장할 출력 데이터 파일

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


int initMtrx(FILE *fp, int m[][SIZE], int size) { // 입력 데이터 파일로부터 25개씩 정수 데이터를 읽어 2차원 배열을 초기화
	int i, j;

	if (fp == NULL) { // fp가 NULL이면 에러 처리 - 입력 파일을 열 수 없음
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