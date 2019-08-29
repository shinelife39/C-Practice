#include <stdio.h>

int main() {
	int ch; // 정수형에 주의
	while ((ch = getchar()) != EOF) { // getchar : 하나의 문자를 읽어서 반환한다. (버퍼 사용)
		putchar(ch); // putchar : 변수 ch에 저장된 문자를 출력한다. (버퍼 사용)
	}
	return 0;
}