#include "stdafx.h"  
#include "stdlib.h"      //调用其中随机函数
#include<iostream>
#include "time.h"
using namespace std;
int main(int argc, char* argv[])
{
	int a[6], ch;      //定义一个数组，用来存放可控参数.
	int temp;

	int k1, k2;  //k1,k2为两个随机数，产生n个式子

	cout << "请输入出题数目：" << endl;
	cin >> a[0];
	cout << "请输入是否有乘除(有->1;   无->0)：" << endl;
	cin >> a[1];
	cout << "请输入出数值范围：";
	cin >> a[2];
	cout << "请输入结果是否有负数(有->1;   无->0)：" << endl;
	cin >> a[3];
	for (int i = 1; i <= a[0]; i++)      //由用户决定打印多少道题a[0]
	{

		if (a[3] == 0) {
			k1 = rand() % (a[2]);   //随机产生a[2]以内的数,a[2]是由用户输入的数值范围
			k2 = rand() % (a[2]);
			if (a[3] == 0)         //控制结果没有负数，如果相减出现负数，则交换两个数
			{
				if (k1 < k2)
				{
					temp = k1;
					k1 = k2;
					k2 = temp;
				}
			}
			else
				k1 = rand() % (a[2]);
			k2 = rand() % (a[2]);
			if (a[1] == 1) {           //a[1]为控制乘除参数
				ch = rand() % 4;      //ch有四种情况，加减乘除
			}
			else
				ch = rand() % 2;      //ch有两种情况，加减，没有乘除

			switch (ch)
			{
			case 0:
				cout << k1 << "+" << k2 << "=" << "\t\t";
				break;
			case 1:
				cout << k1 << "-" << k2 << "=" << "\t\t";
				break;
			case 2:
				cout << k1 << "*" << k2 << "=" << "\t\t";
				break;
			case 3:
				cout << k1 << "/" << k2 << "=" << "\t\t";
				break;
			}
		}


	}
	cout << endl;
	return 0;
}