/*
 ============================================================================
 Name        : 1.c
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

	int mes;

	printf("Ingrese el mes: \n");
		scanf("%d", &mes);

		switch(mes){
		    case 4:
		    case 6:
		    case 9:
		    case 11:
		    printf("Tiene 30 dias \n");
		        break;
		    case 2:
		        printf("Tiene 28 dias \n");
		        break;
		    default:
		    	printf("Tiene 31 dias \n");
		    }

}
