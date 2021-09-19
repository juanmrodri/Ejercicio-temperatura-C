/*
 * utn_biblioteca_arrays.h
 *
 *  Created on: 18 sept 2021
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>

#ifndef UTN_BIBLIOTECA_ARRAYS_H_
#define UTN_BIBLIOTECA_ARRAYS_H_

	/// @brief void imprimirArray(float[], int)
	/// imprime todas las posiciones del array, en este caso del tipo float
	/// @param pArrayUno esta es la direccion de memoria del array
	/// @param len es la cantidad de posiciones del array
void imprimirArray(float pArrayUno[], int len);

	/// @brief void inicalizarArray(int[], int)
	/// inicializa todas las posiciones de un array, en este caso del tipo int
	/// @param pArrayUno esta es la direccion de memoria del array
	/// @param len es la cantidad de posiciones del array
	/// @param valorIninial es el valor que tendra cada posicion del array
void inicalizarArray(float pArrayUno[], int len, int valorIninial);


#endif /* UTN_BIBLIOTECA_ARRAYS_H_ */
