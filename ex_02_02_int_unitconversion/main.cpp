/* 1 ~ 32765 ������ ����(integer) ���� �Է� �޾�, ���� ����, õ�� ����, ���� ����, ���� ����, ���� ������ �����ϴ� ���α׷� */

#include <stdio.h>

int main() {
	int integral_number, ten_thousand = 0, thousand = 0, hundred = 0, ten = 0, one = 0;

	printf("1 ~ 32765 ������ ���� ���� �Է��Ͻÿ�. : ");
	scanf("%d", &integral_number);

	if (10000 <= integral_number && integral_number <= 32765) {
		ten_thousand = integral_number / 10000;
		thousand = (integral_number - ten_thousand * 10000) / 1000;
		hundred = (integral_number - ten_thousand * 10000 - thousand * 1000) / 100;
		ten = (integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;
		
		printf("<<ȯ�� ���>> %d�� %dõ %d�� %d�� %d\n", ten_thousand, thousand, hundred, ten, one);
	}
	else if (1000 <= integral_number && integral_number < 10000) {
		thousand = (integral_number - ten_thousand * 10000) / 1000;
		hundred = (integral_number - ten_thousand * 10000 - thousand * 1000) / 100;
		ten = (integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;

		printf("<<ȯ�� ���>> %dõ %d�� %d�� %d\n", thousand, hundred, ten, one);
	}
	else if (100 <= integral_number && integral_number < 1000) {
		hundred = (integral_number - ten_thousand * 10000 - thousand * 1000) / 100;
		ten = (integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;

		printf("<<ȯ�� ���>> %d�� %d�� %d\n", hundred, ten, one);
	}
	else if (10 <= integral_number && integral_number < 100) {
		ten = (integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100) / 10;
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;

		printf("<<ȯ�� ���>> %d�� %d\n", ten, one);
	}
	else if (0 <= integral_number && integral_number < 10) {
		one = integral_number - ten_thousand * 10000 - thousand * 1000 - hundred * 100 - ten * 10;

		printf("<<ȯ�� ���>> %d\n", one);
	}
	else {
		printf("1 ~ 32765 ������ ���� ���� �Է��Ͻÿ�.\n");
	}

	return 0;
}