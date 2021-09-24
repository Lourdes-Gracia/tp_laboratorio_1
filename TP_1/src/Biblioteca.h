/*
 * Biblioteca.h
 *
 *  Created on: 15 sept. 2021
 *      Author: Lourdes Gracia 1B
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_


/// @fn int validoNums(char[], char[])
/// @brief se pide y se validan los numeros que ingresan
///
/// @param mensaje
/// @param mensajeError
/// @return
int validoNums (char mensaje[], char mensajeError[]);


/// @fn int suma(int, int)
/// @brief Suma dos numeros
///
/// @param primerNumero
/// @param segundoNumero
/// @return resultadod de la suma
int suma (int primerNumero, int segundoNumero);


/// @fn int resta(int, int)
/// @brief Resta el segundo numero del primero
///
/// @param primerNumero
/// @param segundoNumero
/// @return resultado de la resta
int resta (int primerNumero, int segundoNumero);


/// @fn int multiplicacion(int, int)
/// @brief Multiplica los numeros ingresados
///
/// @param primerNumero
/// @param segundoNumero
/// @return resultado de la multiplicacion
int multiplicacion (int primerNumero, int segundoNumero);

/// @fn float division(int, int)
/// @brief
///
/// @param primerNumero
/// @param segundoNumero
/// @return resultado de la division
float division (int primerNumero, int segundoNumero);

/// @fn int factorial(int)
/// @brief Calcula el factorial del numero ingresado
///
/// @param numero
/// @return resultado del factorial
int factorial (int numero);


/// @fn void mensaje(int, int)
/// @brief Muestra los resultados de todas las operaciones
///
/// @param primerNumero
/// @param segundoNumero
void mensaje (int primerNumero, int segundoNumero);


#endif /* BIBLIOTECA_H_ */
