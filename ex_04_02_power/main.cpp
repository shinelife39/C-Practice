/* argc, argv[]의 인수 전달 방법을 사용하여 power(base, exponent)를 재귀(recursive)와 반복(iterative) 구조로 실행하는 프로그램*/

#include <stdio.h>
#include <stdlib.h>

double powerRecur(double, int);
double powerIter(double, int);

double powerRecur(double base, int exponent) {
	if (exponent == 1)
		return base;
	return base * powerRecur(base, exponent - 1);
}

double powerIter(double base, int exponent) {
	int i;
	double result = 1;

	for (i = 0; i < exponent; i++) {
		result *= base;
	}

	return result;
}

int main(int argc, char* argv[]) {
	double baseNum;
	int exponentNum;

	baseNum = atof(argv[2]);
	exponentNum = atoi(argv[3]);

	if (*argv[1] == 'r') {
		printf("%f", powerRecur(baseNum, exponentNum));
	}
	else if (*argv[1] == 'i') {
		printf("%f", powerIter(baseNum, exponentNum));
	}
}