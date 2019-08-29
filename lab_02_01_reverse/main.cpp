/* 최대 10자리수 이내의 10진수를 입력받고, 그 10진수 숫자를 역순으로 출력하는 프로그램 */

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
	int num, divide_pow;
	int reverse[10];

	printf("Input positive decimal number (upto 10 digits): ");
	scanf("%d", &num);
	
	for (int i = 0; i < 10; i++) {
		divide_pow = pow(10, i);
		reverse[i] = (num / divide_pow) % 10;
	}

	printf("Digits in reverse order: ");

	for (int j = 0; j < 10; j++) {
		if (reverse[j] != NULL) {
			printf("%d ", reverse[j]);
		}
	}
	printf("\n");

	return 0;
}