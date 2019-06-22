#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *stack, size = 10001, top = -1, w_count = 0;

void Push(int x) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (stack[i] == NULL) break;
		else count++;
	}

	if (count != size) {
		stack[count] = x;
		top = x;
		w_count++;
	}
}

int Pop() {
	int count = w_count - 1;
	int result = -1;

	if (count != -1) {
		result = stack[count];
		stack[count] = NULL;
		w_count--;
		top = result;
	}

	if (w_count == 0)
		top = -1;		

	return result;
}

int Empty() {
	int e;

	if (w_count == 0) e = 1;
	else e = 0;

	return e;
}

int main() {
	int n;
	char *com, *result;

	scanf("%d", &n);
	stack = (int *)malloc(sizeof(int) * size);

	for (int i = 0; i < size; i++) {
		stack[i] = NULL;
	}

	for (int i = 0; i < n; i++) {
		com = (char *)malloc(sizeof(char) * 12);
		scanf(" %[^\n]", com);

		result = strtok(com, " ");

		if (strcmp(result, "push") == 0) {
			result = strtok(NULL, " ");
			int temp = atoi(result);
			Push(temp);
		}
		else if (strcmp(result, "pop") == 0)
			printf("%d\n", Pop());
		else if (strcmp(result, "size") == 0)
			printf("%d\n", w_count);
		else if (strcmp(result, "empty") == 0)
			printf("%d\n", Empty());
		else if (strcmp(result, "top") == 0)
			printf("%d\n", top);

		free(com);
	}

	free(stack);
	
	return 0;
}
