/* 1 ~ 32765 범위의 정수(integer) 값을 입력 받아, 만의 단위, 천의 단위, 백의 단위, 십의 단위, 일의 단위를 구분하는 프로그램 */

#include <stdio.h>

int main() {
	int integral_number, ten_thousand = 0, thousand = 0, hundred = 0, ten = 0, one = 0;

	printf("1 ~ 32765 범위의 정수 값을 입력하시오. : ");
	scanf("%d", &integral_number);

	if (10000 <= integral_number && integral_number <= 32765) {
		ten_thousand = integral_number / 10000;
		thousand = (integral_number - ten_thousand * 10000) / 1000;
		hundred = (integral_number - ten_thousand * 10000 - thousand * 1000) / 100;
		ten = (integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;
		
		printf("<<환산 결과>> %d만 %d천 %d백 %d십 %d\n", ten_thousand, thousand, hundred, ten, one);
	}
	else if (1000 <= integral_number && integral_number < 10000) {
		thousand = (integral_number - ten_thousand * 10000) / 1000;
		hundred = (integral_number - ten_thousand * 10000 - thousand * 1000) / 100;
		ten = (integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;

		printf("<<환산 결과>> %d천 %d백 %d십 %d\n", thousand, hundred, ten, one);
	}
	else if (100 <= integral_number && integral_number < 1000) {
		hundred = (integral_number - ten_thousand * 10000 - thousand * 1000) / 100;
		ten = (integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;

		printf("<<환산 결과>> %d백 %d십 %d\n", hundred, ten, one);
	}
	else if (10 <= integral_number && integral_number < 100) {
		ten = (integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;

		printf("<<환산 결과>> %d십 %d\n", ten, one);
	}
	else if (0 <= integral_number && integral_number < 10) {
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;

		printf("<<환산 결과>> %d\n", one);
	}
	else {
		printf("1 ~ 32765 범위의 정수 값을 입력하시오.\n");
	}

	return 0;
}