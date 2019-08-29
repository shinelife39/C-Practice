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

	p = strchr(s, c); // s �ȿ��� ���� c�� ã�´�.
	loc = (int)(p - s);

	if (p != NULL) {
		printf("ù��° %c�� %d���� �߰ߵǾ���\n", c, loc);
	}
	else {
		printf("%c�� �߰ߵ��� �ʾ���\n", c);
	}
}

void strstrFunc() {
	char s[] = "A joy that's shared is a joy made double";
	char sub[] = "joy";
	char *p;
	int loc;

	p = strstr(s, sub); // s �ȿ��� ���ڿ� sub�� ã�´�.
	loc = (int)(p - s);

	if (p != NULL) {
		printf("ù��° %s�� %d���� �߰ߵǾ���\n", sub, loc);
	}
	else {
		printf("%s�� �߰ߵ��� �ʾ���\n", sub);
	}
}