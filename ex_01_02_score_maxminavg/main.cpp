/* 원하는 수의 학생 성적을 차례로 입력하고, 가장 우수한 성적, 가장 낮은 성적, 평균 성적을 구하는 프로그램 */

#include <stdio.h>

int main() {
	int score[20] = {};
	int howmany, max = 0, min = 0, sum = 0, i, j, k, t;
	double avg;

	printf("학생수는 몇 명 ? : ");
	scanf("%d", &howmany);

	printf("학생들의 성적을 %d개 입력하시오 : ", howmany);
	
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

	printf("가장 우수한 성적 : %d, 가장 낮은 성적 : %d, 평균 성적 : %f", max, min, avg);
}