#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main() {
	srand((unsigned int)time(NULL));
	printf("%d\n", rand()%10+1);
}
