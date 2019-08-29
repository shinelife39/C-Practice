#include <stdio.h>
#include <string.h>

void strchrFunc();
void strstrFunc();

int main() {
	strchrFunc();
	strstrFunc();

	char s1[] = "100 200 300";
	char s2[30];
	int value;
	
	sscanf(s1, "%d", &value);
	printf("%d\n", value);
	sprintf(s2, "%d", value);
	printf("%s\n", s2);

	return 0;
}

void strchrFunc() {
	char s[] = "language";
	char c = 'g';
	char *p;
	int loc;

	p = strchr(s, c); // s 안에서 문자 c를 찾는다.
	loc = (int)(p - s);

	if (p != NULL) {
		printf("첫번째 %c가 %d에서 발견되었음\n", c, loc);
	}
	else {
		printf("%c가 발견되지 않았음\n", c);
	}
}

void strstrFunc() {
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";
	char *p;
	int loc;

	p = strstr(s, sub); // s 안에서 문자열 sub를 찾는다.
	loc = (int)(p - s);

	if (p != NULL) {
		printf("첫번째 %s가 %d에서 발견되었음\n", sub, loc);
	}
	else {
		printf("%s가 발견되지 않았음\n", sub);
	}
}