#include <stdio.h>

int main() {
	int ch; // �������� ����
	while ((ch = getchar()) != EOF) { // getchar : �ϳ��� ���ڸ� �о ��ȯ�Ѵ�. (���� ���)
		putchar(ch); // putchar : ���� ch�� ����� ���ڸ� ����Ѵ�. (���� ���)
	}
	return 0;
}