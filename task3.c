﻿/*//Библиотека ввода\вывода
#include<stdio.h>
//Библиотека математических функций
#include <math.h>
//Библиотека локализации
#include <locale.h>

//Прототипы функций
//Математическая функция
double fnk(int x);

//Вывод на экран типа double
void display_d(double f);

//Вывод на экран типа int
void display_i(int x);

//Ввод перемнной типа int
int input();

int main(int argc, char *argv)
{
setlocale(LC_CTYPE, "rus");
int x=1000;
float f;

//Функция считаеся с заранее заданной  переменной
f=fnk(x);
display_i(x);
display_d(f);

//Функция считаеся с заданной  переменной
printf("Введите: x=");
x=input();
f=fnk(x);
display_i(x);
display_d(f);

system("pause");
return 0;
}

double fnk(int x)
{
	return (sqrt(2 * x + 2 * sqrt((x ^ 2) - 4))) / ((sqrt((x ^ 2) - 4)) + x + 2);
}
void display_d(double f)
{
	printf("f(x)=%f\n", f);
}
void display_i(int x)
{
	printf("x=%d\n", x);
}
int input()
{
	int x;
	scanf_s("%d", &x);
	return x;
}*/

