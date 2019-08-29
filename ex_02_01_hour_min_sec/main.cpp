/* 표준입력장치로부터 초단위로 입력된 값을 시, 분, 초로 환산하는 프로그램 */

#include <stdio.h>

int main() {
	int hour, min, sec;

	printf("초단위로 시간을 입력하시오 : ");
	scanf("%d", &sec);

	hour = sec / 3600;

	if (sec >= 3600) {
		min = (sec - (hour * 3600)) / 60;
		sec = sec - (hour * 3600) - (min * 60);
	}
	else if (sec < 3600) {
		min = sec / 60;
		sec = sec - (min * 60);
	}

	printf("<<환산된 시간>> %d시간 %d분 %d초\n", hour, min, sec);

	return 0;
}