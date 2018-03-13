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
		printf("������� ����� �������, 999 - ��� ������ : ");
		scanf("%d", &nz);
		cin.get();

		if (nz == 999)
		{
			break;
			system("exit");
		}

		else if (nz == 1)
		{
			/*� �������� ������ �������� ������ ������ ������ ��������� �� ���� ��������. ����� ��� �������� ��������*/
			system("cls");
			char mas[Size] = "���������� ���� ���";
			for (i = 0; i < Size; i++)
			{
				if (mas[i] == '�')
					mas[i] = ' ';
			}
			printf("%s\n", mas);
		}

		else if (nz == 2)
		{
			/*� �������� ������ ��������� ���������� ������ ��������, �������� � ��� ������*/
			system("cls");
			char mas[] = "� �������� ������ ��������� ���������� ������ ��������, �������� � ��� ������";
			printf("%s\n%d - c������� � ������\n", mas, strlen(mas));
		}

		else if (nz == 3)
		{
			/*� �������� ������ ����������� � �������� ������� ��� �����. ������������� ���� ��������� �������*/
			system("cls");
			char str[80];

			printf("������� ������: ");
			gets_s(str, 80);
			reversit(str);
			printf("������������ ������: %s\n", str);
		}

		else if (nz == 4)
		{
			/*� �������� ������ ��������� ���������� ����, ���������� ������ �������� ������� �����. ������������� ���� ��������� �������.*/
			system("cls");
			char mas[Size] = "��� my ������";
			int count = 0;
			for (int i = 0; i < Size; i++)
				if (-32 <= mas[i] && mas[i] < 0)
					count++;
			printf("%s\n 12    345678\n%d - �������� ������� �������� � ������\n", mas, count);
		}

		else if (nz == 5)
		{
			/*�� �������� ������ �������� ������ ����, �������� � ��� ������. ������������� ���� ��������� �������*/
			system("cls");
			char mas[100];
			gets_s(mas, 100);
			printf("��� ���� ������:\n%s\n", mas);
		}

		else if (nz == 6)
		{
			/*��� ������ ��������. ����������, ������� ��������� �������� ����������� � ���. ������� �� �� �����*/
			system("cls");
			char mas[Size];
			printf("������� ������: ");
			gets_s(mas, Size);
			printf("%d - �������� � ������\n", strlen(mas));
		}

		else if (nz == 7)
		{
			/*��� ������ ��������. ���������� ����� ������� ������������������ ������ ������ ���� �*/
			system("cls");
			char mas[Size] = "���� ���������";
			int count = 0;
			for (int i = 0; i < Size; i++)
				if (-32 == mas[i])
					count++;
		}

		else if (nz == 8)
		{
			/*��� ������ ��������, ����� ������� ���� ������������� � ������������� ������. ������� �� ����� ������� ��������, ������������� ������ ���� ������*/
			system("cls");
			char mas[100];
			cout << "������� ������: ";	
			gets_s(mas, 100);
			cout << "�� ����� : " << mas << endl;
			cout << "������ � (): ";
			skobki(mas);
			cout << endl;
		}

		else if (nz == 9)
		{
			/*��� ������ ��������, ���������� �����. ���������� ���������� ��������� �������� � ��������� ���� � ������ ����� �������� � ���.*/
			system("cls");
			char mas[24] = "��� ��� ��������� �����";
			int count = 0;
			for (int i = 0; i < 24; i++)
			{
				if (-32 <= mas[i] && mas[i] < 0)
					count++;
			}
			printf("%d - �������� ������� �������� � ������\n",count);
			count = 0;
			for (int i = 0; i < 24; i++)
			{
				if (-64 <= mas[i] && mas[i] <= -33)
					count++;
			}
			printf("%d - ��������� ������� �������� � ������\n", count);
		}

		else if (nz == 10)
		{
			/*��� ������ ��������, ����� ������� ���� ���� ������������� � ���� ������������� ������. ������� �� ����� ��� �������, ������������� ������ ���� ������*/
			system("cls");
			char mas[100];
			cout << "������� ������: ";
			gets_s(mas, 100);
			cout << "�� ����� : " << mas << endl;
			cout << "������ � (): ";
			skobki(mas);
			cout << endl;
		}

		else
		{
			printf("������ ������� �� ���������� !!! \n");
		}
	}
}
