// 센티널 : 입력되는 데이터의 끝을 알리는 특수한 값
// (센티널 예제) while 문을 이용한 성적의 평균 구하기 프로그램

#include <stdio.h>

int main(void)
{
	int grade, n;
	float sum, average;

	// 필요한 변수 초기화
	n = 0;
	sum = 0;
	grade = 0;

	printf("종료 시 음수 입력\n");

	// 성적을 입력 받아 합계를 구하고 학생 수를 센다.
	while (grade >= 0)
	{
		printf("성적을 입력하시오: ");
		scanf("%d", &grade);

		sum += grade;
		n++;
	}

	sum = sum - grade; // 마지막 데이터를 제거한다.
	n--; // 마지막 데이터를 제거한다.

	// 평균을 계산하고 화면에 출력한다.
	average = sum / n;
	printf("성적의 평균은 %f입니다.\n", average);

	return 0;
}