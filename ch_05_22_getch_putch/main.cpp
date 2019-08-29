#include <stdio.h>
#include <conio.h>

int main() {
	int ch;
	while ((ch = getch()) != 'q') { // getch : 하나의 문자를 읽어서 반환한다. (버퍼 사용 x)
		putch(ch); // putch : 변수 ch에 저장된 문자를 출력한다. (버퍼 사용 o)
	}
	return 0;
}