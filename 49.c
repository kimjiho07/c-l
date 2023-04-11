#include <stdio.h>
int main()
{
	int a = 30;
	float b = 3.14;
	char c = 'A';
	char d[6] = {'K', 'O', 'R', 'E', 'A', '\0'};
	printf("%d %f %d %c \n", a, b, c, d[0]);
	return 0;
}