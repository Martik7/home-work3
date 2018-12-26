#include <stdio.h>
#include <iostream>
#include <locale.h>

void task1()
{
	int a;
	int b;
	printf("Введите число а=");
	scanf_s("%d", &a);
	printf("Введите число b=");
	scanf_s("%d", &b);

	if (a > b)
		printf("%d , %d", b, a);
	if (a < b)
		printf("%d, %d", a, b);
	if (a == b)
		printf("%d, %d", a, b);
}

void task2()
{
	int a, b, c, d, e,SredniiBall;
	printf("Введите 1-ю оценку: ");
	scanf_s("%d", &a);
	printf("Введите 2-ю оценку: ");
	scanf_s("%d", &b);
	printf("Введите 3-ю оценку: ");
	scanf_s("%d", &c);
	printf("Введите 4-ю оценку: ");
	scanf_s("%d", &d);
	printf("Введите 5-ю оценку: ");
	scanf_s("%d", &e);

	SredniiBall = (a + b + c + d + e) / 5;
	printf("Средний балл: %d\n", SredniiBall);
	if (SredniiBall >= 4)
		printf("Допуск!");
	else
		printf("Не допуск!");

}

void task3()
{
	int op1;
	printf("Введите а: ");
	scanf_s("%d", &op1);
	int op2;
	printf("Введите b: ");
	scanf_s("%d", &op2);
	int op3=op1;
	printf("Введите операцию. (Например a+b): ");
	scanf_s("%d", &op3);
	
	
	switch (op3)
	{
	case 1:
	{
		op3 = op1 + op2;
		printf("Result: %d", op3);
	}break;
	case 2:
	{
		op3 = op1 - op2;
		printf("Result: %d", op3);
	}break;
	case 3:
	{
		op3 = op1 * op2;
		printf("Result: %d", op3);
	}break;
	case 4:
	{
		op3 = op1 / op2;
		printf("Result: %d", op3);
	}break;
	default:
		break;
	}
}

int main()
{
	setlocale(LC_ALL, "");

	int task = 0;
	int restart = 0;
	do
	{
		printf("Введите номер задания: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		default:
			break;
		}

		printf("\n----------------------\n");
		printf("Хотите продолжить?1/0\n");
		scanf_s("%d", &restart);

	} while (restart == 1);

	system("pause");
}