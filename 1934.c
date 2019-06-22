#include <stdio.h>

int main() {
	int t, a, b, tn;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		tn = a <= b ? a : b;
	
		for (int j = tn; j > 0; j--) {
			if (j == 1) {
				printf("%d\n", a * b);
				break;
			} else {
				if (a % j == 0 && b % j == 0) {
					printf("%d\n", j * (a / j) * (b / j));
					break;
				}
			}
		}
	}
}
