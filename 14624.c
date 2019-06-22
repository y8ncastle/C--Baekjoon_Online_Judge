#include <stdio.h>

int main() {
	int n, l , r;

	scanf("%d", &n);
	l = (n / 2) + 1; r = (n / 2) + 1;

	if (n % 2 == 0) printf("I LOVE CBNU");
	else {
		for (int i = 0; i < n; i++) {
			printf("*");
		} printf("\n");

		for (int i = 0; i < (n / 2) + 1; i++) {
			for (int j = 0; j < n; j++) {
				if (i == 0 && j == l - 1) { printf("*"); break; }
				else if (j == l - 1) printf("*");
				else if (j == r - 1) { printf("*"); break; }
				else printf(" ");
			}
			l--; r++;
			printf("\n");
		}
	}	
}
