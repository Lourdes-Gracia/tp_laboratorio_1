/*
 ============================================================================
 Name        : TP_1.c
 Author      : Lourdes Gracia 1 B
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 "
f) "El factorial de B es: r2”
5. Salir
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BIBLIOTECA.H"

int main(void)
{
	setbuf(stdout,NULL);

	int primerNumero;
	int primerNumeroCargado; //bandera
	int segundoNumero;
	int segundoNumeroCargado;//bandera
	int opcion3; // bandera

	int opcion;

	primerNumeroCargado = 0;
	segundoNumeroCargado = 0;
	opcion3 = 0;


	printf("== Bienvenide al TP de Lourdes Gracia 1B == \n");

do
{
	// Limpia pantalla
	system("cls");

	// Menú
	printf("\n ======= Menu ====== \n");
	printf("Por favor, seleccione una opcion:\n");


	if (primerNumeroCargado == 0)
	{
		printf("1- Ingrese el primer operando. (A = X) \n");
	}
		else
		{
			printf("1- Ingrese el primer operando. (A = %d) \n", primerNumero);
		}

	if (segundoNumeroCargado == 0)
	{
		printf("2- Ingrese el segundo operando. (B = Y) \n");
	}
		else
		{
			printf("2- Ingrese el segundo operando. (B = %d) \n", segundoNumero);
		}

	if (primerNumeroCargado == 0 && segundoNumeroCargado == 0)
	{
		printf("3- Calcular todas las operaciones.\n"
				"  a) SUMA           (A + B) \n"
				"  b) RESTA          (A - B) \n"
				"  c) MULTIPLICACION (A * B) \n"
				"  d) DIVISION       (A / B) \n"
				"  e) FACTORIAL      (A!) \n"
				"  f) FACTORIAL      (B!) \n");
	}
		else if (primerNumeroCargado == 0)
		{
				printf("3- Calcular todas las operaciones.\n");
				printf("  a) SUMA           (A + %d) \n", segundoNumero);
				printf("  b) RESTA          (A - %d) \n", segundoNumero);
				printf("  c) MULTIPLICACION (A * %d) \n", segundoNumero);
				printf("  d) DIVISION       (A / %d) \n", segundoNumero);
				printf("  e) FACTORIAL      (A!) \n");
				printf("  f) FACTORIAL      (%d!) \n", segundoNumero);
		}
			else if (segundoNumeroCargado == 0)
			{
				printf("3- Calcular todas las operaciones.\n");
				printf("  a) SUMA           (%d + B) \n", primerNumero);
				printf("  b) RESTA          (%d - B) \n", primerNumero);
				printf("  c) MULTIPLICACION (%d * B) \n", primerNumero);
				printf("  d) DIVISION       (%d / B) \n", primerNumero);
				printf("  e) FACTORIAL      (%d!) \n", primerNumero);
				printf("  f) FACTORIAL      (B!) \n");
			}
	else
	{
				printf("3- Calcular todas las operaciones.\n");
				printf("  a) SUMA           (%d + %d) \n", primerNumero, segundoNumero);
				printf("  b) RESTA          (%d - %d) \n", primerNumero, segundoNumero);
				printf("  c) MULTIPLICACION (%d * %d) \n", primerNumero, segundoNumero);
				printf("  d) DIVISION       (%d / %d) \n", primerNumero, segundoNumero);
				printf("  e) FACTORIAL      (%d!) \n", primerNumero);
				printf("  f) FACTORIAL      (%d!) \n", segundoNumero);
	}

	printf( "4- Informar resultados.\n"
			"5- Salir.\n");


	fflush(stdin);

	scanf("%d", &opcion);

	switch (opcion)

	{

		case 1:

			if (primerNumeroCargado == 0)
			{
				primerNumero = validoNums("Ingrese un numero", "Valor invalido. Reingrese un numero");
				primerNumeroCargado++;
			}
				else
				{
					printf("Ya se ha ingresado el numero %d", primerNumero);
				}
		break;

		case 2:

			if (segundoNumeroCargado == 0)
			{
				segundoNumero = validoNums("Ingrese un numero", "Valor invalido. Reingrese un numero");
				segundoNumeroCargado++;
			}
				else
				{
					printf("Ya se ha ingresado el numero %d", segundoNumero);
				}
		break;

		case 3:

			if (primerNumeroCargado == 0 && segundoNumeroCargado == 0)
			{
				printf("Aun no ha ingresado ningun operando.\n\n");
			}
				else if (primerNumeroCargado == 0)
				{
					printf("Aun no ha ingresado el primer operando\n\n");
				}
					else if (segundoNumeroCargado == 0)
					{
						printf("Aun no ha ingresado el segundo operando.\n\n");
					}
						else
						{
							printf("Las operaciones han sido calculadas.\n");
							opcion3++;
						}
		break;

		case 4 :

			if (primerNumeroCargado == 0 && segundoNumeroCargado == 0)
			{
				printf("Aun no ha ingresado ningun operador.\n\n");
			}
				else if (primerNumeroCargado == 0)
				{
					printf("Aun no ha ingresado el primer operando\n\n");
				}
					else if (segundoNumeroCargado == 0)
					{
						printf("Aun no ha ingresado el segundo operando.\n\n");
					}
						else if (opcion3 == 0)
						{
							printf("Aun no se han calculado las operaciones.\n\n");
						}
							else
							{
								mensaje (primerNumero, segundoNumero);
								//Se reinicia
								primerNumeroCargado = 0;
								segundoNumeroCargado = 0;
								opcion3 = 0;
							}
		break;

		case 5:
			printf("Adios!");
			exit(-1);
		break;

		default:
			printf("Opcion invalida.\n");
		break;
	}

		if (opcion != 5)
		{
			system("pause"); // Hace que el programa espere a que el usuario pulse una tecla para seguir ejecutandose
		}

} while (opcion != 5);


	return EXIT_SUCCESS;
}
