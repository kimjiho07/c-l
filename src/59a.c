#include<stdio.h>
int main() 
{
	int a = 5, b = 7, c, d, e, f;
	c = a & b;
	d = a | b;
	e = a ^ b;
	f = ~b;
	a = a >> 1;
	b = b << 3;
	printf("%d, %d, %d\n", a, b, c);
	printf("%d, %d, %d\n", d, e, f);
	
	return 0;
}