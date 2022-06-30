/*
 * vekt.c
 *
 *  Created on: 30 июн. 2022 г.
 *      Author: Максим
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	setbuf(stdout, NULL);   //обнуляем буфер
	int s;
	char op;
	float *a,*b;
	printf("Размер векторов: ");
	scanf("%i",&s);              //вводим размер векторов
	a=malloc(s*sizeof(int));      //выделяем память на первый вектор
	printf("Введите первый вектор: ");
	for (int i=0;i<s;i++) scanf("%f",&a[i]);      //вводим сам вектор
	b=malloc(s*sizeof(int));                      //выделяем память на второй вектор
	printf("Введите второй вектор: ");
    for (int i=0;i<s;i++) scanf("%f",&b[i]);      //вводим второй вектор
    printf("Операция +-*?");
    scanf(" %c",&op);          //вводим операцию, для ветвления в switch
    switch(op)
    {
    case '+':                 //для сложения
    	printf("Получаем: ");
    	for (int i=0;i<s;i++) printf("%f  ",a[i]+b[i]);   //вывод вектора(подпишу один раз)
    	break;
    case '-':                 //для вычетания
    	printf("Получаем: ");
    	for (int i=0;i<s;i++) printf("%f  ",a[i]-b[i]);
    	break;
    case '*':                 //для произведения
    	printf("Получаем: ");
    	for (int i=0;i<s;i++) printf("%f  ",a[i]*b[i]);
    	break;
    default: printf("Такого не умеем");
    }
    free(a);       //Освобождаем память
    free(b);
	return 0;
}
