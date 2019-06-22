#include <stdio.h>

int main() {
	int a, b, mid;
	
	scanf("%d %d", &a, &b);

	if (a > b)
		mid = b;
	else
		mid = a;

	while (!((a % mid == 0) && (b % mid == 0))) {
		mid -= 1;
	}

	printf("%d\n%d\n", mid, mid * (a / mid) * (b / mid));
	
	return 0;
}
