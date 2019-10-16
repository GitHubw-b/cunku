#include "stdio.h"
void main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a)
		printf("不可以构成三角形");
	else
		if (a==b|| b==c || a==c)
		{
			printf("等腰三角形");
		}
		else
			if (a*a+b*b ==c*c || a*a + c*c ==b*b || b*b+c*c==a*a)
			{
				printf("直角三角形");
			}
			else
			{
				printf("普通三角形");
			}
}