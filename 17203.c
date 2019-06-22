#include <stdio.h>
#include <math.h>

int main() {
	int n, q, easy[1000];

	scanf("%d%d", &n, &q);

	for (int i = 0; i < n; i++) {
		scanf("%d", &easy[i]);
	}

	for (int i = 0; i < q; i++) {
		int a, b, sum = 0;
		scanf("%d%d", &a, &b);

		if (a == b) printf("0\n");
		else {
			for (int j = a - 1; j < b - 1; j++) {
				sum += abs(easy[j] - easy[j + 1]);
			}
			printf("%d\n", sum);
		}
	}
}
