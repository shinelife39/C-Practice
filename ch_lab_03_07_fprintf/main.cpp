#include <stdio.h>

int main() {
	int i = 23;
	float f = 1.2345;
	FILE *fp = NULL; // FILE ������fp�� �����ϰ� NULL�� �ʱ�ȭ
	fp = fopen("ch_lab_03_07_fprintf.txt", "w"); // ������ ������� ����, �� �ּҸ� fp�� ����

	if (fp != NULL) {
		fprintf(fp, "%10d %16.4f\n", i, f);
		fprintf(fp, "Color %s, Number %d, Float %5.2f\n", "red", 123456, 3.14);
	}
	fclose(fp); // ���ϴݱ�
	return 0;
}