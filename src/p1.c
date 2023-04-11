#include <stdio.h>
int main()
{
	char passwd[3] = {'e', 'c', 'v'};
	int key = 2; char planText[4];
	
	planText[0] = passwd[0] - key;
	planText[1] = passwd[1] - key;
	planText[2] = passwd[2] - key;
	planText[3] = '\0';
	
	printf("평문은 %s\n", planText);
	return 0;
}