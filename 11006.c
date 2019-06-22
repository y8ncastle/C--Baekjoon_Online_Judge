#include <stdio.h>

int main() {
	int t, n, m, i;

	scanf("%d", &t);

	for (i = 0; i < t; i++) {
		scanf("%d %d", &n, &m);

		printf("%d %d\n", 2 * m - n, m - (2 * m - n));
	}

	return 0;
}
