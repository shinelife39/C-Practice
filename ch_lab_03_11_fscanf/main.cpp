#include <stdio.h>

int main() {
	int i = 0;
	float f = 0;
	FILE *fp = NULL; // FILE 포인터 fp를 생성하고 NULL로 초기화
	fp = fopen("ch_lab_03_11_fscanf.txt", "r"); // 파일을 읽기모드로 열고, 그 주소를 fp에 저장

	if (fp != NULL) {
		fscanf(fp, "%d %f", &i, &f);
	}
	printf(" %d\n %f\n", i, f); // 화면에 출력
	fclose(fp); // 파일 닫기

	return 0;
}