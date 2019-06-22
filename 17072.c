#include <stdio.h>

int main() {
	int n, m, asc[400][1200];

	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3 * m; j++) { scanf("%d", &asc[i][j]); }
	}

	for (int i = 0, in = 0; i < n; i++) {
		for (int j = 0; j < 3 * m; j++) {
			if (j % 3 == 0)		in += 2126 * asc[i][j];
			else if (j % 3 == 1)	in += 7152 * asc[i][j];
			else if (j % 3 == 2) {	in += 722 * asc[i][j];	
				if (in >= 0 && in < 510000)		printf("#");
				else if (in >= 510000 && in < 1020000)	printf("o");
				else if (in >= 1020000 && in < 1530000)	printf("+");
				else if (in >= 1530000 && in < 2040000)	printf("-");
				else printf(".");
				in = 0;
			}
  }
	printf("\n");
}
