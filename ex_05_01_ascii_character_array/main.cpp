/* 영문자를 처리하는 프로그램
입력 파일로부터 10개의 ASCII 단어를 입력받아
각 단어의 길이와 한 줄에 한 단어씩 출력 파일에 출력

이후 추가할것: strcmp 함수와 quick sorting을 사용하여
오름차순으로 정렬하고 출력파일에 출력
*/

#include <stdio.h>
#include <string.h>

#define MAX_WORD_LEN 15
#define NUM_WORDS 10

int main() {
	FILE *pFin = NULL;
	FILE *pFout = NULL;
	
	char str[10];
	char wordList[NUM_WORDS][MAX_WORD_LEN];
	int word_count;
	int i;

	pFin = fopen("input.txt", "r");

	if (pFin == NULL) {
		printf("Error in input data file open!!\n");
		return 0;
	}

	pFout = fopen("output.txt", "w");
	if (pFout == NULL) {
		printf("Error in output data file creation!!\n");
		return 0;
	}

	word_count = 0;
	while (fscanf(pFin, "%s", str) != EOF) {
		strcpy(wordList[word_count], str);
		word_count++;
	}

	for (i = 0; i < word_count; i++) {
		fprintf(pFout, "%s (length: %d)\n", wordList[i], strlen(wordList[i]));
	}

	fprintf(pFout, "\n");
	fclose(pFin);
	fclose(pFout);
}