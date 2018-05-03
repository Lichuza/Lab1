/*//Ѕиблиотека ввода\вывода
#include<stdio.h>
//Ѕиблиотека математических функций
#include <math.h>
//Ѕиблиотека локализации
#include <locale.h>

//√лобальные переменные
int x=1000;
float f;

void fnk()
{
	f = (sqrt(2 * x + 2 * sqrt((x ^ 2) - 4))) / ((sqrt((x ^ 2) - 4)) + x + 2);
}
void display_d()
{
	printf("f(x)=%f\n", f);
}
void display_i()
{
	printf("x=%d\n", x);
}
void input()
{
	scanf_s("%d", &x);
}

int main(int argc, char *argv)
{
setlocale(LC_CTYPE, "rus");

//‘ункци¤ считаес¤ с заранее заданной  переменной
fnk();
display_i();
display_d();

//‘ункци¤ считаес¤ с заданной  переменной
printf("¬ведите x=");
input();
fnk();
display_i();
display_d();

system("pause");
return 0;
}*/