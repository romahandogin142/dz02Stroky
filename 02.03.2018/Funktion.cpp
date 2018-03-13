#include <cstdio>
#include <locale.h>
#include <iostream>
#include <stdio.h>
#include <time.h>
#include <Windows.h>

using namespace std;

//строка наоборот
void reversit(char *mas)
{
	int len = strlen(mas);
	for (int j = 0; j < len / 2; j++)

	{
		char temp = mas[j];
		mas[j] = mas[len - j - 1];
		mas[len - j - 1] = temp;
	}
}

//вывод слов в ()
void skobki(char mas[])
{
	bool flag = false;
	int i = 0;
	while (mas[i] != '\0')
	{
		if (mas[i] == '(')
		{
			flag = true;
			i++;
		}
		if (mas[i] == ')')
			flag = false;
		if (flag)
			cout<<mas[i];
		i++;
	}
}