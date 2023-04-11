#include <stdio.h>

int main() {
	
	float weight = 0, height = 0, bmi = 0;
	printf("몸무게를 입력(kg) : ");
	scanf("%f", &weight);
	printf("신장을 입력(cm) : ");
	scanf("%f", &height);
	height = height * 0.01;
	bmi = weight / (height * height);
	printf("당신의 BMI는 %f\n", bmi);
	return 0;
}
	
	
	
	