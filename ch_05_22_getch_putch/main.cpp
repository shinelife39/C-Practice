#include <stdio.h>
#include <conio.h>

int main() {
	int ch;
	while ((ch = getch()) != 'q') { // getch : �ϳ��� ���ڸ� �о ��ȯ�Ѵ�. (���� ��� x)
		putch(ch); // putch : ���� ch�� ����� ���ڸ� ����Ѵ�. (���� ��� o)
	}
	return 0;
}