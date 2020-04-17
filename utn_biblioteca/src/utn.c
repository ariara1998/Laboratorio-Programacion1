/*
 * utn.c
 *
 *  Created on: 2 abr. 2020
 *      Author: Ari
 */

#include <stdio.h>
#include <stdlib.h>

int utn_getNumero(int* pResultado,char* mensaje, char* mensajeError,int minimo, int maximo, int reintentos)
{
 int ret;
 int num;
 while(reintentos>0)
 {
   printf("%s",mensaje);
   fflush(stdin);
//   scanf("%d",&num);
   if(scanf("%d",&num)==1){  //si scanf=1(pudo escribir la variable)
   if(num<=maximo && num>=minimo)
    {break;}
   }
   reintentos--;
   printf("%s",mensajeError);
 }
if(reintentos==0)
{
 ret=-1;
}
else
{
 ret=0;
 *pResultado = num;
}
return ret;
}

int utn_getCaracter(char* pResultado, char* mensaje,char* mensajeError, char minimo,char maximo,int reintentos)
{
	int retorno = -1;
	char buffer;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			scanf("%c",&buffer);
			if(buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos>=0);

	}
	return retorno;
}
