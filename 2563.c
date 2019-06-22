#include <stdio.h>

int main() {
	int paper[100][100] = { 0, };
	int number, a, b, count = 0;

	scanf("%d", &number);

	for (int i = 0; i < number; i++) {
		scanf("%d %d", &a, &b);

		for (int j = a; j < a + 10; j++) {
			for (int k = b; k < b + 10; k++) {
				paper[j][k] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1)
				count++;
		}
	}

	printf("%d", count);

	return 0;
}
