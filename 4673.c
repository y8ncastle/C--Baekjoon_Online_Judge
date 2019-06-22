#include <stdio.h>

int main() {
	int i, num[10100] = { 0, };

	for (i = 1; i <= 10000; i++) {
		if (i < 10)
			num[i + i]++;
		else if (i >= 10 && i < 100)
			num[i + (i / 10) + (i % 10)]++;
		else if (i >= 100 && i < 1000)
			num[i + (i / 100) + ((i / 10) - 10 * (i / 100)) + (i % 10)]++;
		else if (i >= 1000 && i < 10000)
			num[i + (i / 1000) + ((i / 100) - 10 * (i / 1000)) + ((i % 100) / 10) + (i % 10)]++;
	}

	for (i = 1; i <= 10000; i++) {
		if (num[i] == 0)
			printf("%d\n", i);
	}

	return 0;
}
