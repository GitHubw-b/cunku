#include "stdio.h"
void main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a)
		printf("�����Թ���������");
	else
		if (a==b|| b==c || a==c)
		{
			printf("����������");
		}
		else
			if (a*a+b*b ==c*c || a*a + c*c ==b*b || b*b+c*c==a*a)
			{
				printf("ֱ��������");
			}
			else
			{
				printf("��ͨ������");
			}
}