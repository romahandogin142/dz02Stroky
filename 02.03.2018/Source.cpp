#include <cstdio>
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include "Header.h"

using namespace std;

unsigned short int nz;
#define Size 20

void main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int i, j;
	while (true)
	{
		printf("Введите номер задания, 999 - для выхода : ");
		scanf("%d", &nz);
		cin.get();

		if (nz == 999)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			/*В заданной строке заменить каждый символ строки следующим по коду символом. Букву «я» заменить пробелом*/
			system("cls");
			char mas[Size] = "Переменная типа чяр";
			for (i = 0; i < Size; i++)
			{
				if (mas[i] == 'я')
					mas[i] = ' ';
			}
			printf("%s\n", mas);
		}

		else if (nz == 2)
		{
			/*В заданной строке посчитать количество разных символов, входящих в эту строку*/
			system("cls");
			char mas[] = "В заданной строке посчитать количество разных символов, входящих в эту строку";
			printf("%s\n%d - cимволов в строке\n", mas, strlen(mas));
		}

		else if (nz == 3)
		{
			/*В заданной строке расположить в обратном порядке все слова. Разделителями слов считаются пробелы*/
			system("cls");
			char str[80];

			printf("Введите строку: ");
			gets_s(str, 80);
			reversit(str);
			printf("Перевернутая строка: %s\n", str);
		}

		else if (nz == 4)
		{
			/*В заданной строке посчитать количество слов, содержащих только строчные русские буквы. Разделителями слов считаются пробелы.*/
			system("cls");
			char mas[Size] = "Нет my яблока";
			int count = 0;
			for (int i = 0; i < Size; i++)
				if (-32 <= mas[i] && mas[i] < 0)
					count++;
			printf("%s\n 12    345678\n%d - строчных русских символов в строке\n", mas, count);
		}

		else if (nz == 5)
		{
			/*По заданной строке получить массив слов, входящих в эту строку. Разделителями слов считаются пробелы*/
			system("cls");
			char mas[100];
			gets_s(mas, 100);
			printf("Это ваша строка:\n%s\n", mas);
		}

		else if (nz == 6)
		{
			/*Дан массив символов. Подсчитать, сколько различных символов встречается в нем. Вывести их на экран*/
			system("cls");
			char mas[Size];
			printf("Введите строку: ");
			gets_s(mas, Size);
			printf("%d - символов в строке\n", strlen(mas));
		}

		else if (nz == 7)
		{
			/*Дан массив символов. Подсчитать самую длинную последовательность подряд идущих букв а*/
			system("cls");
			char mas[Size] = "Дваа задааания";
			int count = 0;
			for (int i = 0; i < Size; i++)
				if (-32 == mas[i])
					count++;
		}

		else if (nz == 8)
		{
			/*Дан массив символов, среди которых есть открывающиеся и закрывающиеся скобки. Вывести на экран массивы символов, расположенные внутри этих скобок*/
			system("cls");
			char mas[100];
			cout << "Введите строку: ";	
			gets_s(mas, 100);
			cout << "Вы ввели : " << mas << endl;
			cout << "Строки в (): ";
			skobki(mas);
			cout << endl;
		}

		else if (nz == 9)
		{
			/*Дан массив символов, содержащий текст. Определить процентное отношение строчных и прописных букв к общему числу символов в нем.*/
			system("cls");
			char mas[24] = "Дом под названием ЖЕРДЕ";
			int count = 0;
			for (int i = 0; i < 24; i++)
			{
				if (-32 <= mas[i] && mas[i] < 0)
					count++;
			}
			printf("%d - строчных русских символов в строке\n",count);
			count = 0;
			for (int i = 0; i < 24; i++)
			{
				if (-64 <= mas[i] && mas[i] <= -33)
					count++;
			}
			printf("%d - прописных русских символов в строке\n", count);
		}

		else if (nz == 10)
		{
			/*Дан массив символов, среди которых есть одна открывающаяся и одна закрывающаяся скобка. Вывести на экран все символы, расположенные внутри этих скобок*/
			system("cls");
			char mas[100];
			cout << "Введите строку: ";
			gets_s(mas, 100);
			cout << "Вы ввели : " << mas << endl;
			cout << "Строки в (): ";
			skobki(mas);
			cout << endl;
		}

		else
		{
			printf("Такого задания не существует !!! \n");
		}
	}
}
