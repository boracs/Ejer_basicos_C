#include <stdio.h>

/*
22)Escribir un programa que pida Edades hasta que tecleen 0 y entonces visualizar el n�
de personas que han dado su edad y la edad media de esas personas.
*/


/*
23)Escribir un programa que pida un n�mero, si teclean 0 fin, en caso contrario pedir
otro n�mero, si el 1� es mayor que el segundo visualizar la resta del 1� menos el 2� en
caso contrario visualizar la suma del 1� m�s el 2�, y repetir.

*/

/*
24)Escribir un programa que pida un n�mero, si teclean 0 fin, en caso contrario
visualizar la suma de todos los numeros anteriores a �l, y repetir.
*/

/*

25)Escribir un programa que pida un n�mero, si teclean 0 fin, en caso contrario pedir
otros dos n�meros, si el primero es par visualizar la suma del 2� mas el 3� en caso
contrario visualizar la resta del 2� menos el 3�, y repetir.

26)Escribir un programa que pida un n�mero, si teclean 0 fin, en caso contrario
visualizar todos los n�meros anteriores a �l que sean divisibles por 3, y repetir.
*/


main() {

// 24 
			/*
			int num = 1;
			int suma = 0;
			while (num != 0) {
				int numASumar;
				printf("Dame un numero que deseas sumar");
				scanf_s("%d", &numASumar);
				int suma = 0;
				for (int i = 0; i < numASumar; i++) {
					suma = suma + i;
				}
				printf("la suma de sus numeors anteriores es: %d ", suma);
		
				printf("desea continuar? presione 0 para sailr  sino 1 ");
				scanf_s("%d", &num);

			};
			*/

 // 25

			/*	
			int num = 1;
			while (num != 0) {

				int a;
				printf("Dame el numero a");
				scanf_s("%d", &a);
				
				int b;
				printf("dame el numero b");
				scanf_s("%d", &b);


				if (a%2==0) {
					int suma = a + b;
					printf("%d", suma);
				}
				else {
					int resta = b - a;
					printf("%d", resta);
				}
		
				printf("desea continuar? presione 0 para sailr  sino 1 ");
				scanf_s("%d", &num);


			};

			*/



//26

		
			int num = 1;
			while (num != 0) {
				int numA;
				printf("Dame un numero ");
				scanf_s("%d", &numA);
				for (int i = 0; i < numA; i++) {

					if (i % 3 == 0) {
						printf("%d \n", i);
					}
				}
				printf("desea continuar? presione 0 para sailr  sino 1 ");
				scanf_s("%d", &num);

			};
			










}