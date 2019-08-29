#include <stdio.h>
#include <stdlib.h>
#include <ctime>

#define BIG_RAND_MAX 0xffff

void genBigRandArray(int mA[], int range) {
	char flag[BIG_RAND_MAX] = { 0 };
	unsigned int uint_32;
	unsigned int bigRand;
	int count = 0;

	srand(time(0));
	while (count < range) {
		uint_32 = ((long)rand() << 15) | rand();
		bigRand = uint_32 % range;
		if (flag[bigRand] == 1) {
			continue;
		}
		else {
			flag[bigRand] = 1;
			mA[count++] = bigRand;
		}
		for (int i = 0; i < count; i++) {
			printf("%d", mA[i]);
		}
	}
}

int main() {
	int mA[] = { 0 };

	genBigRandArray(mA, 0x7ffffff);
}