// ��Ƽ�� : �ԷµǴ� �������� ���� �˸��� Ư���� ��
// (��Ƽ�� ����) while ���� �̿��� ������ ��� ���ϱ� ���α׷�

#include <stdio.h>

int main(void)
{
	int grade, n;
	float sum, average;

	// �ʿ��� ���� �ʱ�ȭ
	n = 0;
	sum = 0;
	grade = 0;

	printf("���� �� ���� �Է�\n");

	// ������ �Է� �޾� �հ踦 ���ϰ� �л� ���� ����.
	while (grade >= 0)
	{
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade; // ������ �����͸� �����Ѵ�.
	n--; // ������ �����͸� �����Ѵ�.

	// ����� ����ϰ� ȭ�鿡 ����Ѵ�.
	average = sum / n;
	printf("������ ����� %f�Դϴ�.\n", average);

	return 0;
}