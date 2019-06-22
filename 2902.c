#include <stdio.h>
#include <string.h>

int main() {
	int length;
	char character[101];
	
	scanf("%s", &character);
	length = strlen(character);

	for (int i = 0; i < length; i++) {
		if (i == 0)
			printf("%c", character[0]);
		else if (character[i] == '-' && i != length - 1)
			printf("%c", character[i + 1]);
	}

	return 0;
}
