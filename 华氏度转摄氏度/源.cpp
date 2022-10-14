#include<stdio.h>
int main(void)
{
	float f, c;
	scanf_s("%f",&f);
	c = (5.0 / 9) * (f - 32);
	printf("f=%f\n c=%f\n,",f, c);
	return 0;
}