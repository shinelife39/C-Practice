/* 1���� 10������ ���Ͽ� ���� ���ϰ�, �� ����� ���ϴ� ���α׷� */

#include<stdio.h>

int main() {
	int num[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sum = 0;
	int i;
	double avg = 0;
	
	for (i = 0; i < 10; i++) {
		sum += num[i];
	}
	
	avg = (double)sum / 10;

	printf("�� : %d, ��� : %f\n", sum, avg);

	return 0;
}