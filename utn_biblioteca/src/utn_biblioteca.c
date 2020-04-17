/*
 ============================================================================
 Name        : utn_funciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main() {
	setbuf(stdout, NULL);
	int num;
	int resp;

	resp = utn_getNumero(&num,"Ingrese un numero","Error",1,10,3);
	if(resp==0){
	printf("El numero ingresado es %d",num);
	}
	else{
		printf("ERROR");
	}
	return 0;
}
