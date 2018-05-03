/*//Ѕиблиотека ввода\вывода
#include<stdio.h>
//Ѕиблиотека математических функций
#include <math.h>
//Ѕиблиотека локализации
#include <locale.h>

int main(int argc, char *argv)
{
	setlocale(LC_CTYPE, "rus");
    int x=1000;
	float f;

	//‘ункци¤ считаес¤ с заранее заданной  переменной
	f = (sqrt(2*x+2*sqrt((x^2)-4))) / ((sqrt((x ^ 2) - 4)) + x + 2);
	printf("x=%d\n", x);
	printf("f(x)=%f\n", f);

	//‘ункци¤ считаес¤ с заданной  переменной
	printf("¬ведите x=");
	scanf_s("%d",&x);
	f = (sqrt(2 * x + 2 * sqrt((x ^ 2) - 4))) / ((sqrt((x ^ 2) - 4)) + x + 2);
	printf("x=%d\n", x);
	printf("f(x)=%f\n", f);

	system("pause");
	return 0;
}*/