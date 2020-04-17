/*
 ============================================================================
 Name        : Class5Ej2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main() {
	setbuf(stdout, NULL);
	int arrayNum[5];
	int max;
	int min;
	int i;

	for(i=0;i<5;i++){
		printf("Ingrese un numero \n");
		scanf("%d",&arrayNum[i]);
		if(arrayNum[i]>max || i == 0){
			max = arrayNum[i];
		}
		if(arrayNum[i]<min || i == 0){
					min = arrayNum[i];
		}
	}
	printf("El maximo es %d y el minimo %d \n" ,max ,min);
    return 0;
}
