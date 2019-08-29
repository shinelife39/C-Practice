#include <stdio.h>
#include <string.h>

#define MAX_WORD_LEN 50
#define NUM_WORDS 100

int main() {
	FILE *pFin = NULL;
	FILE *pFout = NULL;

	char str[80];
	char wordList[NUM_WORDS][MAX_WORD_LEN];
	int word_count;

	pFin = fopen("input.txt", "r");
	if (pFin == NULL) {
		printf("Error in input data file open !!\n");
		return 0;
	}

	pFout = fopen("output.txt", "w");
	if (pFout == NULL) {
		printf("Error in output data file creation !!\n");
		return 0;
	}

	word_count = 0;
	while (fscanf(pFin, "%s", str) != EOF) {
		printf("%2d-th input word: %s\n", word_count, str);
		strcpy(wordList[word_count], str);
		word_count++;
	}

	printf("Number of words: %d\n", word_count);

	for (int i = 0; i < word_count; i++) {
		fprintf(pFout, "wordList[%2d]:%s(length:%d)\n", i, wordList[i], strlen(wordList[i]));
	}
	fprintf(pFout, "\n");
	fclose(pFin);
	fclose(pFout);
}