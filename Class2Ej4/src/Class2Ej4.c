/*
 ============================================================================
 Name        : Class2Ej4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num;
	int max;
	int min;
	int i;
	int cont=0;
	int promedio;
	int suma=0;
	int flag=0;

	for(i=0;i<5;i++){
		printf("Ingrese un numero \n");
		scanf("%d", &num);
		if(flag==0){
			max=num;
			min=num;
			flag=1;
		}
		if(num<min){
			min=num;
		}
		if(num>max){
			max=num;
		}
		suma+=num;
		cont++;
	}
	promedio=suma/cont;
	printf("El promedio es %d ,elmaximo %d, el minimo %d \n" ,promedio ,max ,min);
}
