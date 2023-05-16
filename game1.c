#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int rnd, i = 1, user;
	
	srand(time(NULL));
	rnd = random()%10+1;
	
	while( i <= 10) {
		printf("%d : 컴퓨터가 생각한 숫자를 입력=>", i);
		scanf("%d", &user);
		
		if (rnd == user) {
			printf("와우 성공\n");
			printf("%d 번만에 성공 했습니다.\n", i);
			break;
		}else if(i==10) {
			printf("게임종료\n");
		}else {
			printf("틀렸습니다.\n");
		}
		i = i + 1;
	}
	
	return 0;
}