#include <stdio.h>

Room_check(int h, int w, int n, int c) {
	int temp_room, room = 101;

	for (int i = 0; i < w; i++) {
		temp_room = room;

		for (int j = 0; j < h; j++) {
			if (c == n - 1)
				return temp_room;
			else {
				temp_room += 100;
				c++;
			}
		}

		room++;
	}
}

int main() {
	int t, h, w, n, check = 0;

	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d %d %d", &h, &w, &n);

		printf("%d\n", Room_check(h, w, n, check));
	}

	return 0;
}
