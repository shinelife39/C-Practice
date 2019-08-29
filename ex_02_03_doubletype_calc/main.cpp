/* 2°³ÀÇ ºÎµ¿¼Ò¼öÁ¡ µ¥ÀÌÅÍ(double type)¸¦ ÀÔ·Â ¹Ş¾Æ, µ¡¼À, »¬¼À, °ö¼À, ³ª´°¼ÀÀ» Ãâ·ÂÇÏ´Â ÇÁ·Î±×·¥ */

#include <stdio.h>

int main() {
	double num1, num2, add, sub, mul, div;

	printf("¼ıÀÚ 2°³¸¦ ÀÔ·ÂÇÏ½Ã¿À. : ");
	scanf("%lf", &num1);
	scanf("%lf", &num2);

	add = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;

	printf("<<°á°ú>>\n");
	printf("µ¡¼À : %lf, »¬¼À : %lf, °ö¼À : %lf, ³ª´°¼À : %lf\n", add, sub, mul, div);

	return 0;
}