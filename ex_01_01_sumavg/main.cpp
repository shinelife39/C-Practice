/* 1부터 10까지를 더하여 합을 구하고, 그 평균을 구하는 프로그램 */

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

	printf("합 : %d, 평균 : %f\n", sum, avg);

	return 0;
}