#include "stdafx.h"  
#include "stdlib.h"      //���������������
#include<iostream>
#include "time.h"
using namespace std;
int main(int argc, char* argv[])
{
	int a[6], ch;      //����һ�����飬������ſɿز���.
	int temp;

	int k1, k2;  //k1,k2Ϊ���������������n��ʽ��

	cout << "�����������Ŀ��" << endl;
	cin >> a[0];
	cout << "�������Ƿ��г˳�(��->1;   ��->0)��" << endl;
	cin >> a[1];
	cout << "���������ֵ��Χ��";
	cin >> a[2];
	cout << "���������Ƿ��и���(��->1;   ��->0)��" << endl;
	cin >> a[3];
	for (int i = 1; i <= a[0]; i++)      //���û�������ӡ���ٵ���a[0]
	{

		if (a[3] == 0) {
			k1 = rand() % (a[2]);   //�������a[2]���ڵ���,a[2]�����û��������ֵ��Χ
			k2 = rand() % (a[2]);
			if (a[3] == 0)         //���ƽ��û�и��������������ָ������򽻻�������
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
			if (a[1] == 1) {           //a[1]Ϊ���Ƴ˳�����
				ch = rand() % 4;      //ch������������Ӽ��˳�
			}
			else
				ch = rand() % 2;      //ch������������Ӽ���û�г˳�

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