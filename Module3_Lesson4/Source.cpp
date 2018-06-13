#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{

	case 3:
	{
		/*int x, y, p;
	again:
		printf("enter 2 numbers from 1 to 9:\n\n");
		scanf("%d %d", &x, &y);
		printf("введите их произведение:\t");
		scanf("%d", &p);
		if (p == x*y) printf("\ntrue\n\n");
		else printf("false, %d*%d=%d\n\n", x, y, x*y);
		goto again;*/

		//3.	Необходимо написать программу, которая проверяет пользователя на знание таблицы умножения. 
		//Пользователь сам вводит два целых однозначных числа. Программа задаёт вопрос: результат умножения
		//первого числа на второе. Пользователь должен ввести ответ и увидеть на экране правильно 
		//он ответил или нет. Если нет – показать еще и правильный результат
		int a = 0, b = 0;
		int countTrue = 0, countFalse = 0, numExam = 1;
		int result = 0;
	start2:
		a = 1 + rand() % 9;
		b = 1 + rand() % 9;

		printf("%d) %d * %d = ", numExam, a, b);
		scanf("%d", &result);

		int mresult = a*b;
		if (result == mresult)
			countTrue++;
		else
			countFalse++;

		numExam++;
		if (numExam <= 10)
			goto start2;
		else
		{
			printf("-----------------------------------\n");

			printf("Итого правильных ");
			SetConsoleTextAttribute(hConsole, 2);
			printf("%d", countTrue);
			SetConsoleTextAttribute(hConsole, 15);
			printf(", неправильных ");
			SetConsoleTextAttribute(hConsole, 4);
			printf("%d\n\n", countFalse);
			SetConsoleTextAttribute(hConsole, 15);
		}
	}
		break;
	case 4:
	{
		int d, m;
		printf("day:\t");
		scanf("%d", &d);
		printf("month:\t");
		scanf("%d", &m);
		if ((m == 3 && d > 21) || (m == 4 && d > 22)) printf("Овен\n\n");
		else if ((m == 4 && d > 21) || (m == 5 && d < 22)) printf("Телец\n\n");
		else if ((m == 5 && d > 21) || (m == 6 && d < 22)) printf("Близнецы\n\n");
		else if ((m == 6 && d > 21) || (m == 7 && d < 22)) printf("Рак\n\n");
		else if ((m == 7 && d > 21) || (m == 8 && d < 22)) printf("Лев\n\n");
		else if ((m == 8 && d > 21) || (m == 9 && d < 22)) printf("Дева\n\n");
		else if ((m == 9 && d > 21) || (m == 10 && d < 22)) printf("Весы\n\n");
		else if ((m == 10 && d > 21) || (m == 11 && d < 22)) printf("Скорпион\n\n");
		else if ((m == 11 && d > 21) || (m == 12 && d < 22)) printf("Стрелец\n\n");
		else if ((m == 12 && d > 21) || (m == 1 && d < 22)) printf("Козерог\n\n");
		else if ((m == 1 && d > 21) || (m == 2 && d < 22)) printf("Водолей\n\n");
		else if ((m == 2 && d > 21) || (m == 3 && d < 22)) printf("Рыбы\n\n");
		else printf("\nenter valid date of birth\n\n");
	}
	break;
	case 5:
	{
		int x, a, b, c;
		x = 1 + rand() % 5;
		switch (x)
		{
		case 1:
			a = 6; b = 7, c = 8;
			break;
		case 2:
			a = 7; b = 8; c = 9;
			break;
		case 3:
			a = 6; b = 9; c = 10;
			break;
		case 4:
			a = 6; b = 9; c = 8;
			break;
		case 5:
			a = 7; b = 6; c = 10;
			break;
		}
		printf("ваш набор #%d: %d %d %d\n\n", x, a, b, c);
		
		int a1, b1, c1;
	again:
		a1 = 6 + rand() % 5;
		b1 = 6 + rand() % 5;
		c1 = 6 + rand() % 5;
		if (a1 != b1 != c1)
		{
			printf("мой набор: %d %d %d\n\n", a1, b1, c1);
			if ((a + b + c) > (a1 + b1 + c1))
				printf("You win!\n\n");
			else if ((a + b + c) == (a1 + b1 + c1))
				printf("draw\n\n");
			else printf("Loser!\n\n");
		}
		else goto again;
	}
	break;
	case 6:
	{

	}
	break;
	case 7:
	{

	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
	}