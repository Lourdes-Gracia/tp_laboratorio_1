/*
 * Biblioteca.c
 *
 *  Created on: 15 sept. 2021
 *      Author: Lourdes Gracia 1B
 */

#include "BIBLIOTECA.H"
#include <stdio.h>
#include <stdlib.h>


int validoNums (char mensaje[], char mensajeError[])
{

	int num;
	int checkeoNum;

	setbuf(stdout,NULL);
	printf("%s: \n", mensaje);
	checkeoNum = scanf("%d", &num);
	fflush(stdin);

	while(checkeoNum == 0) {
		printf("%s: \n", mensajeError);
		checkeoNum = scanf("%d", &num);
		fflush(stdin);
	}
	return num;
}


int suma (int primerNumero, int segundoNumero)
{

	int total;

	total = primerNumero + segundoNumero;

	return total;
}

int resta (int primerNumero, int segundoNumero)
{

	int total;

	total = primerNumero - segundoNumero;

	return total;
}

int multiplicacion (int primerNumero, int segundoNumero)
{

	int total;

	total = primerNumero * segundoNumero;

	return total;
}

float division (int primerNumero, int segundoNumero)
{
	float total;

	total = primerNumero/segundoNumero;

	return total;
}


int factorialPrimerNumero (int primerNumero)
{

	int factPrimerNumero;
	int fact;
	int i;
	factPrimerNumero = 0;
	fact = 1;


	for (i = 1; i <= primerNumero; ++i)
	{
		fact =  fact * i;
	}
	factPrimerNumero = fact;

	return factPrimerNumero;

}

int factorialSegundoNumero (int segundoNumero)
{
	int factSegundoNumero;
	int fact;
	int i;

	factSegundoNumero = 0 ;
	fact = 1;


	for (i = 1; i <= segundoNumero; ++i)
	{
		fact =  fact * i;
	}
	factSegundoNumero = fact;

	return factSegundoNumero;
}

void mensaje (int primerNumero, int segundoNumero)
{

	printf("a) El resultado de %d mas %d es igual a %d\n",  primerNumero, segundoNumero, suma (primerNumero, segundoNumero));
	printf("b) El resultado de %d menos %d es igual a %d\n",  primerNumero, segundoNumero, resta ( primerNumero, segundoNumero));
	printf("c) El resultado de %d multiplicado %d es igual a %d\n",  primerNumero, segundoNumero, multiplicacion ( primerNumero, segundoNumero));

	if (segundoNumero == 0)
			{
				printf("d) No se puede dividir el numero %d por 0 \n", primerNumero);
			}
				else
				{
					printf("d) El resultado de %d dividido %d es igual a %.2f\n", primerNumero, segundoNumero, division(primerNumero, segundoNumero));
				}

		if (primerNumero < 0)
			{
				printf("e) No se puede calcular el factorial del numero %d porque es negativo \n", primerNumero);
			}
			if (primerNumero > 14)
			{
				printf("e) No se puede calcular el factorial del numero %d porque es demasiado alto \n", primerNumero);

			}
			else
			{
				printf("e) El factorial de %d es %d\n", primerNumero, factorialPrimerNumero (primerNumero));
			}

			if (segundoNumero < 0)
			{
				printf("f) No se puede calcular el factorial del numero %d porque es negativo \n", segundoNumero);
			}
			if (segundoNumero > 14)
			{
				printf("f) No se puede calcular el factorial del numero %d porque es demasiado alto \n", segundoNumero);
			}
			else
			{
				printf("f) El factorial de %d es %d\n", segundoNumero, factorialSegundoNumero (segundoNumero));
			}
}
