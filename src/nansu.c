#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int rnd;
	srand(time(NULL));
	rnd = rand()%6;
	printf("%d\n", rnd + 1);

	return 0;
}