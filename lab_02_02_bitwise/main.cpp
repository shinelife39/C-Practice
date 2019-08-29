/* 0~255 ������ ���� ������ 10���� 2���� �Է� �ް�, �̵��� 8����, 16����, 2���� ����,
10���� ���� bitwise AND�� ����ϰ� ��� ������� 16���� �� 2���� ���� ����ϴ� ���α׷� */

#include <stdio.h>

int main() {
	int first_num, second_num, i;
	int divide[8], zero_one[8], first_binary[8], second_binary[8], bitwise_AND[8];

	/* first decimal integer */
	printf("Input first decimal integer (0 ~ 255) : ");
	scanf("%d", &first_num);

	divide[0] = first_num;

	for (i = 0; i < 8; i++) {
		if (i < 7) {
			divide[i + 1] = divide[i] / 2;
		}		
		zero_one[i] = divide[i] % 2;
	}

	printf("First input data (Decimal) %d = (Octal) %#o = (Hexa-decimal) %#x = ", first_num, first_num, first_num);

	for (i = 0; i < 8; i++) {
		first_binary[i] = zero_one[7 - i];
		printf("%d", first_binary[i]);
	}

	/* second decimal integer */
	printf("\nInput second decimal integer (0 ~ 255) : ");
	scanf("%d", &second_num);

	divide[0] = second_num;

	for (i = 0; i < 8; i++) {
		if (i < 7) {
			divide[i + 1] = divide[i] / 2;
		}		
		zero_one[i] = divide[i] % 2;
	}

	printf("Second input data (Decimal) %d = (Octal) %#o = (Hexa-decimal) %#x = ", second_num, second_num, second_num);

	for (i = 0; i < 8; i++) {
		second_binary[i] = zero_one[7 - i];
		printf("%d", second_binary[i]);
	}
	
	printf("\nBit-wise AND of two input data (%#x & %#x) => %#x = ", first_num, second_num, first_num & second_num);

	for (i = 0; i < 8; i++) {
		bitwise_AND[i] = first_binary[i] & second_binary[i];
		printf("%d", bitwise_AND[i]);
	}

	printf("\n");

	return 0;
}