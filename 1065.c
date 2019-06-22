#include <stdio.h>

int check(int num) {
	int i, count = 0;
	
	for (i = 1; i <= num; i++) {
		if (i < 100)
			count++;
		else if (i >= 100 && i < 1000) {
			if ((i / 10 - 10 * (i / 100) - i / 100) == (i % 10 - (i / 10 - 10 * (i / 100))))
				count++;
		}
	}

	return count;
}

int main() {
	int n;

	scanf("%d", &n);

	printf("%d", check(n));

	return 0;
}
