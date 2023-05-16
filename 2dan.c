#include<stdio.h>

int main()
{
	int i = 1, dan1;
	while(1) {
		printf("몇단? : ");
		scanf("%d", &dan1);
		if (dan1 == 0) {
			printf("종료\n");
			break;
		}
		
		while(i < 10) {
			printf("%d X %d = %d\n", dan1, i, dan1 * i);
			i = i + 1;
		}
		i = 0;
	}
	return 0;
}