//Задание 3.3

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	double x, y; //Вводим нужные переменные
	
	printf("x = "); scanf("%lf", &x); //Пользователь вводит значение x

	//Производим расчёты по формуле
	y = 2 * (x - 2) * (x - 2) * (x - 5);
	y = 1 - cbrt(y);

	printf("y = %.3lf\n", y); //Выводим значение y

	return 0;
}
