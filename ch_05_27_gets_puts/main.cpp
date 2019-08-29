#include <stdio.h>


int main() {
	char name[100];
	char address[100];

	printf("이름 : ");
	gets_s(name); // 한 단어 이상을 입력 받을 때에 사용한다.

	printf("주소 : ");
	gets_s(address);

	puts(name);
	puts(address);

	return 0;
}