#include <stdio.h>

int main() {
	int i = 0;
	float f = 0;
	FILE *fp = NULL; // FILE ������ fp�� �����ϰ� NULL�� �ʱ�ȭ
	fp = fopen("ch_lab_03_11_fscanf.txt", "r"); // ������ �б���� ����, �� �ּҸ� fp�� ����

	if (fp != NULL) {
		fscanf(fp, "%d %f", &i, &f);
	}
	printf(" %d\n %f\n", i, f); // ȭ�鿡 ���
	fclose(fp); // ���� �ݱ�

	return 0;
}