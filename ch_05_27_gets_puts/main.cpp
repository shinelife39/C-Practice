#include <stdio.h>


int main() {
	char name[100];
	char address[100];

	printf("�̸� : ");
	gets_s(name); // �� �ܾ� �̻��� �Է� ���� ���� ����Ѵ�.

	printf("�ּ� : ");
	gets_s(address);

	puts(name);
	puts(address);

	return 0;
}