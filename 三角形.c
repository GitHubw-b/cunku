#include "stdio.h"
void main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a + b <= c || a + c <= b || b + c <= a)
		printf("�����Թ���������");
	else
		printf("���Թ���������");
}