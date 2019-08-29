#include <stdio.h>

int main() {
	int i = 23;
	float f = 1.2345;
	FILE *fp = NULL; // FILE 포인터fp를 생성하고 NULL로 초기화
	fp = fopen("ch_lab_03_07_fprintf.txt", "w"); // 파일을 쓰기모드로 열고, 그 주소를 fp에 저장

	if (fp != NULL) {
		fprintf(fp, "%10d %16.4f\n", i, f);
		fprintf(fp, "Color %s, Number %d, Float %5.2f\n", "red", 123456, 3.14);
	}
	fclose(fp); // 파일닫기
	return 0;
}