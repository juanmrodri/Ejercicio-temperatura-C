/*
 * utn_biblioteca_arrays.c
 *
 *  Created on: 18 sept 2021
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca_arrays.h"

void imprimirArray(float pArrayUno[], int len) // como regla gral, esta bueno tener en cuenta que como parametro, paso cuanto mide el array
{
	int i;

	if(pArrayUno!=NULL)
	{
		for(i=0;i<len;i++)
			{
				printf("%.2f\n", pArrayUno[i]);
			}
	}
	else
	{
		printf("No existe nada para imprimir");
	}
}

void inicalizarArray(int pArrayUno[], int len, int valorIninial)
{
	int i;

		if(pArrayUno!=NULL)
		{
			for(i=0;i<len;i++)
				{
					pArrayUno[i]=valorIninial;
				}
		}
		else
		{
			printf("No existe nada para imprimir");
		}
}
