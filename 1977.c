#include <stdio.h>
#include <math.h>

int main() {
	double m, n, sum = 0, min = 10001;

	scanf("%lf %lf", &m, &n);

	for (int i = m; i <= n; i++) {
		if (sqrt(i) - (int)(sqrt(i)) == 0) {
			sum += i;

			if (i < min)
				min = i;
		}
	}

	if (min != 10001)
		printf("%d\n%d\n", (int)sum, (int)min);
	else
		printf("-1\n");

	return 0;
}
