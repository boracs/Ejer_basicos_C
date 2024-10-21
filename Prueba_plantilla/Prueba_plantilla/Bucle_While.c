
#include<stdio.h>
#include<Windows.h>


main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/* 1) Escribir un programa en C que lea números por teclado hasta que se introduzca el 0.
	Acumule los pares elevados al cuadrado en una variable y en otra multiplicados por 2 los
	impares.
	*/
	/*
	
	int num;

	printf("dame un numero");
	scanf_s("%d", &num);
	int cuadrado = 0;
	int multiplcidadoPorDos = 0;

	while (num != 0) {

		if (num % 2 == 0) {
			 cuadrado += num * num;
			printf("El cuarado es: %d \n", cuadrado);
		}
		else {
			 multiplcidadoPorDos += num * 2;
			printf("El multiplo por 2  es: %d  \n", multiplcidadoPorDos);
		}


	printf("dame un numero");
	scanf_s("%d", &num);

	}
	
	*/
	//-----------------------------------------------------------------------


	/*2) Escribir un programa que haga lo siguiente:
		i) Pedir un número n1
		ii) Pedir 20 números (n2).
		iii) De los 20 números mostrar: cuántas veces n1 fue igual a n2, cuál de los 20
		números fue el mayor.
		iv) Preguntar si se desea repetir y volver a 1 en caso afirmativo.
	*/

	char resp = " ";
	do {
		printf("Dame un numeorPrincipal\n");
		int numPrincip;
		scanf_s("%d", &numPrincip);
		
		int numMax = 0;
		int contRepetidos = 0;

		for (int i = 0; i < 3; i++) {
			printf("Dame un numero secundario\n");
			int num;
			scanf_s("%d", &num);

			if (num > numMax) {
				numMax = num;
			}
			if (num == numPrincip) {
				contRepetidos++;
			}
		}

		printf("numeor maxmo : %d , cantidades repetidas el numeroPrincip: %d \n", numMax, contRepetidos);

		printf("Desea continuar?");
		resp = getche();


	} while (resp == 's' || resp == 'S');





}

