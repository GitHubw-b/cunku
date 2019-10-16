#include "stdio.h"
void main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a)
		printf("不可以构成三角形");
	else
		printf("可以构成三角形");
}