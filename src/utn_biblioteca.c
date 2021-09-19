/*
 * utn_biblioteca.c
 *
 *  Created on: 7 sept 2021
 *      Author: juanm
 */

#include "utn_biblioteca.h"

int pedirFloatAUsuario(float* pResultado, float min, float max, int reintentos, char* variableTexto, char* textoError)
{
	int retorno=-1; // el -1 ahora significa que los parametros estan mal
	float aux;
	int i;
	int r; // la usamos para chequear que no ingrese caracteres en lugar de numeros
	// podemos chequear que un puntero no este apuntando a una direccion invalida con NULL, solo me sirve para punteros, que chequean direccion de memoria, me sirve para saber si no apunto a la nada misma
	// ej pResultado != NULL
	for (i=0; i<=reintentos; i++)
	{
		if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
		{
				printf("%s",variableTexto);
				fflush(stdin);
				r = scanf("%f", &aux);

				if(r == 1) // es decir, si pudo convertir efectivamente lo ingresado en float
				{
					if (aux>=min && aux<=max)
							{
								retorno = 0; // OK
								*pResultado=aux;
								break;
							}
							else
							{
								retorno = -2; // ahora -2 significa que hay un error, pero por cantidad de intentos
								printf("%s", textoError);
							}
				}
				else
				{
					printf("%s", textoError); // si ingresamos un caracter cae aca y nos da el mensaje de error
				}

		}
	}
	return retorno;
}

int pedirIntAUsuario(int* pResultado, int min, int max, int reintentos, char* variableTexto, char* textoError)
{
		int retorno=-1;
		int aux;
		int i;
		int r;

		for (i=0; i<=reintentos; i++)
		{
				if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
						{
						printf("%s",variableTexto);
						fflush(stdin);
						r = scanf("%d", &aux);

						if(r == 1)
						{
							if (aux>=min && aux<=max)
								{
									retorno = 0; // OK
									*pResultado=aux;
									break;
								}
								else
								{
									retorno = -2;
									printf("%s", textoError);
								}
						}
						else
						{
							printf("%s", textoError);
						}
				}
		}
		return retorno;
}

int pedirCharUsuario(char* pResultado, char min, char max, int reintentos, char* variableTexto, char* textoError) // el min y el max puede ser int tambien
{
		int retorno=-1;
		char aux;
		int i;

		for (i=0; i<=reintentos; i++)
		{
				if(pResultado != NULL && min<max && reintentos >=0 && variableTexto != NULL && textoError != NULL)
						{

						printf("%s",variableTexto);
						fflush(stdin);
						scanf("%c", &aux);

						if (aux>=min && aux<=max)
						{
							retorno = 0; // OK
							*pResultado=aux;
							break;
						}
						else
						{
							retorno = -2; // ahora -2 significa que hay un error
							printf("%s", textoError);
						}
				}
		}
		return retorno;
}
