#include <stdio.h>
#include <malloc.h>

void Merge(int n[], int p, int q, int r) {
	int *m;
	int i = p, j = q + 1, k = 0;

	m = (int *)malloc(sizeof(int) * (r + 1));

	while (i <= q && j <= r) {
		if (n[i] <= n[j])
			m[k++] = n[i++];
		else
			m[k++] = n[j++];
	}
	while (i <= q)
		m[k++] = n[i++];
	while (j <= r)
		m[k++] = n[j++];

	i = p; k = 0;

	while (i <= r)
		n[i++] = m[k++];

	free(m);
}

void MergeSort(int n[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		MergeSort(n, p, q);
		MergeSort(n, q + 1, r);
		Merge(n, p, q, r);
	}
}

int main() {
	int *n, num;

	scanf("%d", &num);

	n = (int *)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &n[i]);
	}

	MergeSort(n, 0, num - 1);

	for (int i = 0; i < num; i++) {
		printf("%d\n", n[i]);
	}

	free(n);

	return 0;
}
