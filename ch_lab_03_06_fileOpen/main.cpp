#include "stdio.h"

int main() {
	FILE *fp = NULL; // FILE ������ fp�� �����ϰ� NULL�� �ʱ�ȭ
	fp = fopen("ch_lab_03_06_fileOpen.txt", "w"); // ������ ���� ���� ����, �� �ּҸ� fp�� ����

	if (fp == NULL) {
		printf("���Ͽ������\n");
	}
	else {
		printf("���Ͽ��⼺��\n");
	}

	fclose(fp); // ���� �ݱ�

	return 0;
}