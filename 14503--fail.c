#include <stdio.h>

int i, j, d, ro = 0, cl = 0, nm[50][50] = { 0, };

void Check() {
	switch (d) {
	case 0: if (nm[i - 1][j] == 0) { d = 3; i -= 1; ro++; } else { d = 3; ro++; } break;
	case 1: if (nm[i][j - 1] == 0) { d = 0; j -= 1; ro++; } else { d = 0; ro++; } break;
	case 2: if (nm[i + 1][j] == 0) { d = 1; i += 1; ro++; }	else { d = 1; ro++; } break;
	case 3: if (nm[i][j + 1] == 0) { d = 2; j += 1; ro++; }	else { d = 2; ro++; } break;
	}
}

int main() {
	int n, m, r, c;

	scanf("%d%d%d%d%d", &n, &m, &r, &c, &d);

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			scanf("%d", &nm[i][j]);
		}
	} 
	i = r; j = c;

	while (1) {
		if (nm[i][j] == 0) { nm[i][j] = 1; cl++; ro = 0; }
		Check();

		if (ro == 10) {
			if		(d == 0 && nm[i][j + 1] == 0) { j += 1; ro = 0; }
			else if (d == 1 && nm[i - 1][j] == 0) { i -= 1; ro = 0; }
			else if (d == 2 && nm[i][j - 1] == 0) { j -= 1; ro = 0; }
			else if (d == 3 && nm[i + 1][j] == 0) { i += 1; ro = 0; }
			else break;
		}
	}
	printf("%d\n", cl);
}
