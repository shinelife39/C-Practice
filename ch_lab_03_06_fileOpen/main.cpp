#include "stdio.h"

int main() {
	FILE *fp = NULL; // FILE 포인터 fp를 생성하고 NULL로 초기화
	fp = fopen("ch_lab_03_06_fileOpen.txt", "w"); // 파일을 쓰기 모드로 열고, 그 주소를 fp에 저장

	if (fp == NULL) {
		printf("파일열기실패\n");
	}
	else {
		printf("파일열기성공\n");
	}

	fclose(fp); // 파일 닫기

	return 0;
}