/* ���ϴ� ���� �л� ������ ���ʷ� �Է��ϰ�, ���� ����� ����, ���� ���� ����, ��� ������ ���ϴ� ���α׷� */

#include <stdio.h>

int main() {
	int score[20] = {};
	int howmany, max = 0, min = 0, sum = 0, i, j, k, t;
	double avg;

	printf("�л����� �� �� ? : ");
	scanf("%d", &howmany);

	printf("�л����� ������ %d�� �Է��Ͻÿ� : ", howmany);
	
	for (i = 0; i < howmany; i++) {
		scanf("%d", &score[i]);
	}

	for (j = 0; j < howmany; j++) {
		if (max < score[j]) {
			max = score[j];
		}
	}

	min = score[0];

	for (k = 1; k < howmany; k++) {
		if (min > score[k]) {
			min = score[k];
		}
	}

	for (t = 0; t < howmany; t++) {
		sum += score[t];
	}

	avg = (double)sum / howmany;

	printf("���� ����� ���� : %d, ���� ���� ���� : %d, ��� ���� : %f", max, min, avg);
}