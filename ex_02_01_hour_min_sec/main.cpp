/* ǥ���Է���ġ�κ��� �ʴ����� �Էµ� ���� ��, ��, �ʷ� ȯ���ϴ� ���α׷� */

#include <stdio.h>

int main() {
	int hour, min, sec;

	printf("�ʴ����� �ð��� �Է��Ͻÿ� : ");
	scanf("%d", &sec);

	hour = sec / 3600;

	if (sec >= 3600) {
		min = (sec - (hour * 3600)) / 60;
		sec = sec - (hour * 3600) - (min * 60);
	}
	else if (sec < 3600) {
		min = sec / 60;
		sec = sec - (min * 60);
	}

	printf("<<ȯ��� �ð�>> %d�ð� %d�� %d��\n", hour, min, sec);

	return 0;
}