#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <conio.h>

void main()
{

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

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
		printf("������� �� ������������:\t");
		scanf("%d", &p);
		if (p == x*y) printf("\ntrue\n\n");
		else printf("false, %d*%d=%d\n\n", x, y, x*y);
		goto again;*/

		int a, b;
	start2:
		a = 1 + rand() % 9;
		b = 1 + rand() % 9;
		
		int mresult = a*b;
		int result = 0;
		int countTrue = 0, countFalse = 0, numExam = 1;
		printf("a=%d b=%d\n\n", a, b);
		printf("a*b=");
		scanf("%d", &result);
		
		if (result == mresult)
			countTrue++;
		else
			countFalse++;

		numExam++;
		if (numExam <= 10)
			goto start2;
		else
		{
			printf("--------------------------------------------\n\n");
			printf("����� ����������: %d\n\n");
			printf("");
			printf("");

			//colors

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
		if ((m == 3 && d > 21) || (m == 4 && d > 22)) printf("����\n\n");
		else if ((m == 4 && d > 21) || (m == 5 && d < 22)) printf("�����\n\n");
		else if ((m == 5 && d > 21) || (m == 6 && d < 22)) printf("��������\n\n");
		else if ((m == 6 && d > 21) || (m == 7 && d < 22)) printf("���\n\n");
		else if ((m == 7 && d > 21) || (m == 8 && d < 22)) printf("���\n\n");
		else if ((m == 8 && d > 21) || (m == 9 && d < 22)) printf("����\n\n");
		else if ((m == 9 && d > 21) || (m == 10 && d < 22)) printf("����\n\n");
		else if ((m == 10 && d > 21) || (m == 11 && d < 22)) printf("��������\n\n");
		else if ((m == 11 && d > 21) || (m == 12 && d < 22)) printf("�������\n\n");
		else if ((m == 12 && d > 21) || (m == 1 && d < 22)) printf("�������\n\n");
		else if ((m == 1 && d > 21) || (m == 2 && d < 22)) printf("�������\n\n");
		else if ((m == 2 && d > 21) || (m == 3 && d < 22)) printf("����\n\n");
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
		printf("��� ����� #%d: %d %d %d\n\n", x, a, b, c);
		
		int a1, b1, c1;
	again:
		a1 = 6 + rand() % 5;
		b1 = 6 + rand() % 5;
		c1 = 6 + rand() % 5;
		if (a1 != b1 != c1)
		{
			printf("��� �����: %d %d %d\n\n", a1, b1, c1);
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