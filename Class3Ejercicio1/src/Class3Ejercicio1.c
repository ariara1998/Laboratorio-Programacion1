/*
 ============================================================================
 Name        : Class3Ejercicio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "getnum.h"

//int getNum();

int main() {
	setbuf(stdout, NULL);
	int resp;

	resp = getNum();
	printf("El numero ingresado por el usuario es: %d", resp);
	return 0;

}

/*int getNum(){
	int numero;
	printf("Ingrese un numero \n");
	scanf("%d", &numero);
	return numero;
}
*/
