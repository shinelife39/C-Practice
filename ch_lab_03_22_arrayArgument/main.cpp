#include <stdio.h>
#define STUDENTS 5

int get_average(int score[], int n);

int main() {
	int grade[STUDENTS] = { 1,2,3,4,5 };
	int avg;

	avg = get_average(grade, STUDENTS);
	printf("����� %d�Դϴ�.\n", avg);

	return 0;
}

int get_average(int score[], int n) {
	int i;
	int sum = 0;

	for (i = 0; i < n; i++) {
		sum += score[i];
	}
	return sum / n;
}