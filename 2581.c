#include <stdio.h>

int main() {
	int i, j, m, n, min = 10001, sum = 0;

	scanf("%d %d", &m, &n);

	for (i = m; i <= n; i++) {
		for (j = 2; j != i, j <= i; j++) {
			if (i % j == 0)
				break;
		}

		if (i == j) {
			sum += i;
				
			if (i < min)
				min = i;
		}
	}

	if (min == 10001)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, min);

	return 0;
}
