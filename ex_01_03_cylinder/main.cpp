/* ����ڷκ��� ������� �������� ���̸� �Է¹ް�, ü��(volume)�� ǥ����(surface area)�� ����ϴ� ���α׷� */

#include <stdio.h>

int main() {
	int radius, height, volume, surface_area;

	printf("������� ������ : ");
	scanf("%d", &radius);
	printf("������� ���� : ");
	scanf("%d", &height);

	volume = 3.14 * radius * radius * height;
	surface_area = 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;

	printf("ü��(volume) = %d", volume);
	printf("\nǥ����(surface_area) = %d\n", surface_area);

	return 0;
}