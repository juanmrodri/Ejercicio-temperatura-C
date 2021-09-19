/*
 * utn_biblioteca_arrays.c
 *
 *  Created on: 18 sept 2021
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca_arrays.h"
#include "utn_biblioteca.h"

void imprimirArray(float pArrayUno[], int len) // como regla gral, esta bueno tener en cuenta que como parametro, paso cuanto mide el array
{
	int i;
	int dia;

	if(pArrayUno!=NULL)
	{
		for(i=0;i<len;i++)
			{
				dia=i+1;
				printf("Dia(%d) - temperatura: %.2f\n",dia, pArrayUno[i]);
			}
	}
	else
	{
		printf("No existe nada para imprimir");
	}
}

void inicializarArray(float pArrayUno[], int len, float valorIninial)
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

void cargarTemperaturaEnArray(float temperaturaPorDia[], int len)
{
	int dia; // el dia ingresado por el usuario
	float temp;
	int result;
	int posicion;

	// 1) pedir al usuario el dia
	result = pedirIntAUsuario(&dia, 1, 31, 2, "Por favor ingrese el dia a registrar: ", "Se produjo un error\n");
	if(result==0)
		{
			printf("Todo ok!\n");
			// 2) pedir al usuario la temperatura
				result = pedirFloatAUsuario(&temp, -10.00, 45.00, 2, "Por favor ingrese la temperatura registrada: ", "Se produjo un error\n");
					if(result==0)
						{
							printf("Todo ok!\n");
						}
						else
							{
								printf("No se pudo registrar la temperatura\n");
							}
				// 3) transformar el dia en la posicion correcta
				posicion = dia -1;

				// 4) cargar la temperatura en la posicion del array
				temperaturaPorDia[posicion]=temp;
		}
		else
			{
				printf("No se pudo registrar la temperatura\n");
			}
}
