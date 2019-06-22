#include <stdio.h>
#include <string.h>

int main() {
	char string[50];
	char key[46] = { '`', '1', 'Q', 'A', 'Z', '2', 'W', 'S', 'X', '3', 'E', 'D', 'C', '4', '5', 'R', 'T', 'F', 'G', 'V', 'B',
		'6', '7', 'Y', 'U', 'H', 'J', 'N', 'M', '8', 'I', 'K', ',', '9', 'O', 'L', '.', '0', '-', '=', 'P', '[', ']', ';', '\'', '/' };

	int count[8] = { 0, };
	int i, j, length;

	scanf("%s", &string);

	length = strlen(string);

	for (i = 0; i < length; i++) {
		for (j = 0; j < 46; j++) {
			if (string[i] == key[j]) {
				if (j >= 0 && j < 5)
					count[0]++;
				else if (j >= 5 && j < 9)
					count[1]++;
				else if (j >= 9 && j < 13)
					count[2]++;
				else if (j >= 13 && j < 21)
					count[3]++;
				else if (j >= 21 && j < 29)
					count[4]++;
				else if (j >= 29 && j < 33)
					count[5]++;
				else if (j >= 33 && j < 37)
					count[6]++;
				else if (j >= 37 && j < 46)
					count[7]++;

				break;
			}
		}
	}

	for (i = 0; i < 8; i++) {
		printf("%d\n", count[i]);
	}

	return 0;
}
