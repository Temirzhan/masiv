#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;
#define size8 8
#define size12 12
char f;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	do {
		int N = 0;
		cout << "�������� �������" << endl;
		cin >> N;
		if (N == 1)
		{
			/*1.1.	�������� ���������� ������ ������ ���� ��������� ������� M. ������� �������� ��������� � ������� ���������� ��������� �����. ������������ ������.*/
			int f[10];

			for (int i = 0; i < 10; i++)
			{
				f[i] = 1 + rand() % 11;
				cout << " f[" << i << "] = " << f[i] << endl;
			}

		}
		else if (N == 2)
		{
			/*2.	2.	������ ������������ ��� �������� �������� ����� �������� �������. � ������� ������� ��������� ����� ��������� ������ ������ ����������, �������� � ��������� �� 50 �� 100 ������������.*/
			int f[20];
			cout << "�������" << endl;
			for (int i = 0; i <20; i++)
			{
				f[i] = 50 + rand() % 50;
				cout << " ��� " << i + 1 << " �������� ����� " << f[i] << endl;
			}

		}

		else if (N == 4)
		{
			/*4.	4.	��� ������ ����� �����. ��������:
			a.	�������� �� s-� ������� ������� ������������� ������
			b.	�������� �� k-� ������� ������� ������ ������
			c.	����� ������� ������� ������: k-� ��� s-�.
			*/
			int f[11];
			int s;
			int k;
			for (int i = 0; i<11; i++)
			{
				f[i] = -10 + rand() % 100;
				cout << " f[" << i << "] = " << f[i] << endl;
			}
			cout << "������� �����������" << endl;
			cin >> s;
			if (f[s] > 0)
				cout << "�������������" << endl;
			else
				cout << "�� �������������" << endl;
			cout << "������� �����������" << endl;
			cin >> k;
			if ((f[k] % 2) == 0)
				cout << "������" << endl;
			else
				cout << "�� ������" << endl;

			cout << "������� ������: k-� ��� s-�" << endl;
			for (int i = 0; i < 11; i++)
			{
				if ((f[i]>f[k]) || (f[i]>f[s]))
					cout << " f[" << i << "] = " << f[i] << endl;
			}
		}
		else if (N == 5)
		{
			/*5.	��� ������. ��� ��� ��������:
			��������� �� 20
			�������� �� ��������� �������
			��������� �� ����� �.*/
			float f[20];
			for (int i = 0; i<20; i++)
			{
				f[i] = 1.1 + rand() % 15;
				cout << " f[" << i << "] = " << f[i] << endl;
			}
			for (int i = 0; i < 20; i++)
			{
				f[i] -= 20;
				cout << " f[" << i << "]  -20 =" << f[i] << endl;
			}
			for (int i = 0; i < 20; i++)
			{
				f[i] *= f[15];
				cout << " f[" << i << "] = *f[15] =" << f[i] << endl;
			}
			for (int i = 0; i < 20; i++)
			{
				f[i] += 15;
				cout << " f[" << i << "]  +15 =" << f[i] << endl;
			}
		}

		cout << "������ ���������� ���������" << endl;
		cout << "y-da    n-no" << endl;
		cin >> f;
	} while (f == 'y');
}