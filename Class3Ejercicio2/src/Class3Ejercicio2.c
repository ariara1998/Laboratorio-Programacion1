/*
 ============================================================================
 Name        : Class3Ejercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float areaCirculo();

int main() {

	setbuf(stdout, NULL);

	float num;

	num = areaCirculo();
	printf("El area es: %.2f", num);
	return 0;

}

float areaCirculo(){
	float radio;
	float area;

	printf("Ingrese el radio: ");
	scanf("%f", &radio);
	area = 3.14 * radio * radio;
	return area;
}
