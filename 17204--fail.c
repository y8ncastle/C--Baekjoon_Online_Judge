#include <stdio.h>

int main() {
	int n, k, i, m = 0, loc = 0, people[150];

	scanf("%d%d", &n, &k);

	for (i = 0; i < n; i++) {
		scanf("%d", &people[i]);
	}

	i = 0;

	while (1) {
		loc = people[i];
		m++;
		i++;

		if (loc == k) {
			printf("%d\n", m);
			break;
		} else if (loc == 0) {
			printf("-1\n");
			break;
		}
	}
}
