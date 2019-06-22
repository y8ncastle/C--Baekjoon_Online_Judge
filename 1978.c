#include <stdio.h>

int main() {
	int n, num, prime, count = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &num);

		if (num == 2)
			count++;
		else if (num > 2) {
			prime = 0;

			for (int j = 2; j <= num; j++) {
				if (num != j && num % j == 0) {
					prime = 1;
					break;
				}
			}

			if (prime == 0)
				count++;
		}
	}

	printf("%d\n", count);

	return 0;
}
