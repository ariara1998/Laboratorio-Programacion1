/*
 ============================================================================
 Name        : Ejercicioclass2.c
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
int num;
int cont=0;

   printf("ingrese un numero");
   scanf("%d",&num);
   for(int i=1;i<=num;i++){
	   if((num%i)==0){
		   printf("\n El numero divisor es: %d", i);
		   cont++;
	   }
   }

	printf("\n La cantidad de divisores es: %d",cont);
}
