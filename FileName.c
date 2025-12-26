#include <stdio.h>
#include <conio.h>
#include <locale.h>
void main(void)
{
	int y, n, Y, N;
	char d;
	setlocale(LC_ALL, "rus");
	printf("\n Введите символ:");
	scanf_s("%c", &d);
	switch (d)
	{
	case('y'):
	case('Y'):
	{
		printf("\n Да");
		break;
	}
	case('n'):
	case('N'):
	{
		printf("\n Нет");
		break;
	}
	}
	_getch();
}