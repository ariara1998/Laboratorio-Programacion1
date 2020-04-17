/*
 ============================================================================
 Name        : Class8Ej1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

#define QTY 5

int initArray(int* array,int* limite,int inicio);
int printArray(int* array,int* limite);
int getArray(int* pResultado,char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos);

int main() {
	setbuf(stdout, NULL);
	int legajo[];
	char sexo[];
	int edad[];
	int nota1[];
	int nota2[];
	float promedio[];
	char apellido[][30];
	/*funciones para
	inicializar
	cargar
	mostrar estuduiante
	mostrar estudiantes
	ordenar por legajo*/
	int edades[QTY];
	initArray(edades,QTY,0);
	printArray(edades,QTY);
	return 0;

}

int initArray(int* array,int* limite,int inicio){
	int retorno =-1;
	int i;

	if(array != NULL && limite>0){
		for(i=0;i<limite;i++){
			array[i]=inicio;
		}
		retorno=0;
	}
	return retorno;
}

int printArray(int* array,int* limite){
	int retorno =-1;
	int i;

	if(array != NULL || limite > 0 ){
		for(i = 0; i < limite; i++){
			printf("El numero es %d",array[i]);
		}
		retorno=0;
	}
	return retorno;
}

int getArray(int* pResultado,char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos){
	int retorno = -1;
	int buffer;
	do{
		if(utn_getNumero(pResultado,mensaje,mensajeError,minimo,maximo,reintentos)==0){

		}
	}while(reintentos==0);


}
