#include <stdio.h>

int main() {
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	int i;
	
	printf("���� ���ڿ� = %s\n", src);
	
	for (i = 0; src[i] != NULL; i++) {
		dst[i] = src[i];
	}

	dst[i] = NULL;
	printf("����� ���ڿ� = %s\n", dst);

	return 0;
}