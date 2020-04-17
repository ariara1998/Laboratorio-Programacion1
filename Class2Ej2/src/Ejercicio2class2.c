/*
 ============================================================================
 Name        : Ejercicio2class2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

setbuf(stdout, NULL); // Para limpiar la consola
int num;
int suma=0;
char respuesta;

do{
	printf("\n Ingrese un numero");
	scanf("%d" , &num);
	if(num>0){
		suma=num+suma;
	}
	printf("\n Seguir ingresando numeros");
	fflush(stdin);// Limpia el buffer del teclado
	scanf("%c", &respuesta);
}while(respuesta=='s');

    printf("\n La suma d los positivos es : %d" ,suma);
}
