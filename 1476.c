#include <stdio.h>

int main() {
	int e, s, m, y = 1;
	int a = 1, b = 1, c = 1;

	scanf("%d%d%d", &e, &s, &m);

	while (1) {
		if (a == e && b == s && c == m) break;
		else {
			a++; b++; c++; y++;

			if (a > 15) a = 1;
			if (b > 28) b = 1;
			if (c > 19) c = 1;
		}
	}
	printf("%d\n", y);
}
