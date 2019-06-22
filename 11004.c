#include <stdio.h>
#include <malloc.h>

Merge(int A[], int p, int q, int r) {
	int *B;
	int	i = p, j = q + 1, k = 0;

	B = (int *)malloc(sizeof(int) * (r + 1));

	while (i <= q && j <= r) {
		if (A[i] <= A[j])	B[k++] = A[i++];
		else				B[k++] = A[j++];			
	}

	while (i <= q) B[k++] = A[i++];
	while (j <= r) B[k++] = A[j++];

	i = p; k = 0;
	
	while (i <= r) A[i++] = B[k++];

	free(B);
}

MergeSort(int A[], int p, int r) {
	if (p < r) {
		int q = (p + r) / 2;
		MergeSort(A, p, q);
		MergeSort(A, q + 1, r);
		Merge(A, p, q, r);
	}
}

int main() {
	int n, k, *A;

	scanf("%d%d", &n, &k);
	A = (int *)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	MergeSort(A, 0, n - 1);
	printf("%d", A[k-1]);
	free(A);
}
