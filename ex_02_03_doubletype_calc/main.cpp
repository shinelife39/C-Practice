/* 2���� �ε��Ҽ��� ������(double type)�� �Է� �޾�, ����, ����, ����, �������� ����ϴ� ���α׷� */

#include <stdio.h>

int main() {
	double num1, num2, add, sub, mul, div;

	printf("���� 2���� �Է��Ͻÿ�. : ");
	scanf("%lf", &num1);
	scanf("%lf", &num2);

	add = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;

	printf("<<���>>\n");
	printf("���� : %lf, ���� : %lf, ���� : %lf, ������ : %lf\n", add, sub, mul, div);

	return 0;
}