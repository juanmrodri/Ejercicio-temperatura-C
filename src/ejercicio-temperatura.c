/*
 ============================================================================
 Name        : ejercicio-temperatura.c
 Author      : Juan Manuel
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

	 * Ejercicio 1:
	 * crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes.
	 * Definir un array de floats de 31 posiciones. Cada posicion corresponderá a un dia
	 * del mes. Hacer un programa con un menu de dos opciones, 1.imprimir array y 2.cargar array
	 * Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
	 * Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
	 * y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
	 * Ambas opciones deben volver al menu ppal.
	 * Utilizar la funcion utn_getNumeroFloat() de la biblioteca utn.h


 */

#include <stdio.h>
#include <stdlib.h>
#include "utn_biblioteca.h"
#include "utn_biblioteca_arrays.h"
#define DIAS_LEN 31


int main(void) {
	setbuf(stdout, NULL);

	int option;
	int diaIngresado;
	float temperaturaIngresada;
	float arrayDias[DIAS_LEN];
	int banderaPrimeraVuelta=0;
	int result;

	do
	{
		if(banderaPrimeraVuelta==0)
		{
			banderaPrimeraVuelta=1;
			inicalizarArray(arrayDias, DIAS_LEN, 0);
		}
		result= pedirIntAUsuario(&option, 1, 3, 0, "Elija una de estas opciones:\n1.Ingresar valores\n2.Imprimir valores\n3.Salir\n", "La opcion no es valida\n");
		system("cls");
		if(result==0)
		{
			if(option==1)
					{
						result = pedirIntAUsuario(&diaIngresado, 1, 31, 2, "Por favor ingrese el dia a registrar: ", "Se produjo un error\n");

										if(result==0)
												{
													printf("Todo ok!\n");
												}
												else
												{
													printf("No se pudo registrar la temperatura\n");
												}

									result = pedirFloatAUsuario(&temperaturaIngresada, -10.00, 45.00, 2, "Por favor ingrese la temperatura registrada: ", "Se produjo un error\n");

										if(result==0)
												{
													printf("Todo ok!\n");
												}
												else
												{
													printf("No se pudo registrar la temperatura\n");
												}

										arrayDias[diaIngresado-1] = temperaturaIngresada; // -1 para que no deje la pos. 0 en 0.00
					}
			else
			{
				if(option==2)
				{
					imprimirArray(arrayDias, DIAS_LEN);
				}
			}
		}
		else
		{

			printf("Tenga en cuenta las opciones\n\n");
		}


	}while(option!=3);

	return EXIT_SUCCESS;
}

