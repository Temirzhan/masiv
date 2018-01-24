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
		cout << "Выберите задания" << endl;
		cin >> N;
		if (N == 1)
		{
			/*1.1.	Создайте одномерный массив целого типа заданного размера M. Задайте значения элементов с помощью генератора случайных чисел. Распечатайте массив.*/
			int f[10];

			for (int i = 0; i < 10; i++)
			{
				f[i] = 1 + rand() % 11;
				cout << " f[" << i << "] = " << f[i] << endl;
			}

		}
		else if (N == 2)
		{
			/*2.	2.	Массив предназначен для хранения значений весов двадцати человек. С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно.*/
			int f[20];
			cout << "Таблица" << endl;
			for (int i = 0; i <20; i++)
			{
				f[i] = 50 + rand() % 50;
				cout << " Вес " << i + 1 << " человека равен " << f[i] << endl;
			}

		}

		else if (N == 4)
		{
			/*4.	4.	Дан массив целых чисел. Выяснить:
			a.	является ли s-й элемент массива положительным числом
			b.	является ли k-й элемент массива четным числом
			c.	какой элемент массива больше: k-й или s-й.
			*/
			int f[11];
			int s;
			int k;
			for (int i = 0; i<11; i++)
			{
				f[i] = -10 + rand() % 100;
				cout << " f[" << i << "] = " << f[i] << endl;
			}
			cout << "введите индефикатор" << endl;
			cin >> s;
			if (f[s] > 0)
				cout << "положительный" << endl;
			else
				cout << "не положительный" << endl;
			cout << "введите индефикатор" << endl;
			cin >> k;
			if ((f[k] % 2) == 0)
				cout << "четное" << endl;
			else
				cout << "не четное" << endl;

			cout << "массива больше: k-й или s-й" << endl;
			for (int i = 0; i < 11; i++)
			{
				if ((f[i]>f[k]) || (f[i]>f[s]))
					cout << " f[" << i << "] = " << f[i] << endl;
			}
		}
		else if (N == 5)
		{
			/*5.	Дан массив. Все его элементы:
			уменьшить на 20
			умножить на последний элемент
			увеличить на число В.*/
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

		cout << "Хотите продолжить проверять" << endl;
		cout << "y-da    n-no" << endl;
		cin >> f;
	} while (f == 'y');
}