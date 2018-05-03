//Подключение заголовочного файла fnk.h
#include"fnk.h"
//Библиотека ввода\вывода
#include<stdio.h>
//Библиотека локализации
#include <locale.h>

int main(int argc, char *argv)
{
setlocale(LC_CTYPE, "rus");

//Функция считаеся с заранее заданной  переменной
fnk();
display_i();
display_d();

//Функция считаеся с заданной  переменной
printf("Введите x=");
input();
fnk();
display_i();
display_d();

system("pause");
return 0;
}