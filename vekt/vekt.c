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
	setbuf(stdout, NULL);
	int s;
	char op;
	float *a,*b;
	printf("Размер векторов: ");
	scanf("%i",&s);
	a=malloc(s*sizeof(int));
	printf("Введите первый вектор: ");
	for (int i=0;i<s;i++) scanf("%f",&a[i]);
	b=malloc(s*sizeof(int));
	printf("Введите второй вектор: ");
    for (int i=0;i<s;i++) scanf("%f",&b[i]);
    printf("Операция +-*?");
    scanf(" %c",&op);
    switch(op)
    {
    case '+':
    	printf("Получаем: ");
    	for (int i=0;i<s;i++) printf("%f  ",a[i]+b[i]);
    	break;
    case '-':
    	printf("Получаем: ");
    	for (int i=0;i<s;i++) printf("%f  ",a[i]-b[i]);
    	break;
    case '*':
    	printf("Получаем: ");
    	for (int i=0;i<s;i++) printf("%f  ",a[i]*b[i]);
    	break;
    default: printf("Такого не умеем");
    }
    free(a);
    free(b);
	return 0;
}
