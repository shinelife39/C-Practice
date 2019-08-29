/* 사용자로부터 원기둥의 반지름과 높이를 입력받고, 체적(volume)과 표면적(surface area)를 계산하는 프로그램 */

#include <stdio.h>

int main() {
	int radius, height, volume, surface_area;

	printf("원기둥의 반지름 : ");
	scanf("%d", &radius);
	printf("원기둥의 높이 : ");
	scanf("%d", &height);

	volume = 3.14 * radius * radius * height;
	surface_area = 2 * 3.14 * radius * radius + 2 * 3.14 * radius * height;

	printf("체적(volume) = %d", volume);
	printf("\n표면적(surface_area) = %d\n", surface_area);

	return 0;
}