
#include<stdio.h>
#include<Windows.h>


main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	/*9 // Escribir un programa que pida un número y después otro, este último validando que esté
entre 0 y 9. Contar cuantas veces aparece el segundo en el primero (Ej 1231, el 1 aparece 2
veces). Preguntar si se desea repetir y en caso afirmativo volver al principio.*/


/*
	char resp = ' ';

	do {

		//puio
		// primer numero
		printf("dame un primer numero");
		int num1;
		scanf_s("%d", &num1);

		//declaro variable contadora del digito
		int cont = 0;

		//pido segundo numero
		int num2;
		int valido;
		int aux;

		aux = num1;
		do {
			printf("dame un segundo numero entre 0 y 9");

			scanf_s("%d", &num2);
			valido = -1;
			if (num2 < 0 || num2>9) {
				printf("El numeor debe ser entre 0 y 9 vuelve a introducirlo");
			}
			else {
				valido = 1;
			}
		} while (valido !=1);


		 //procedo a contar los digitos
		while (num1 > 0) {
			int dig = num1 % 10;
			printf(" el digito es %d \n", dig);
			printf("y el numero dos es %d \n", num2);
			if (num2 == dig) {
				printf("este digito es igual");
				cont++;
			}
			num1 = num1 / 10;
		}
		printf("El numero %d se encuentra  %d veces en el numero %d \n", num2, cont,aux);

		//pregunto si desesa repetir
		printf("Si desea pedir otor numero  presione S");
		resp = getche();
	} while (resp == 's'  || resp=='S');
*/



/*) Escribir un programa en C que pida un número de teclado y calcule todos los números
primos entre 0 y dicho número.
*/
/*
printf("Dame un numero por teclado");
int num;
scanf_s("%d", &num);

for (int i = 0; i < num; i++) {
	int cont = 0;


	for (int j = 1; j <= i; j++) {
		if (i % j == 0) {
			cont++;
		}
	}


	if (cont <= 2) {
		printf("Un numero primo es el %d \n", i);
	}


}

*/



/*
3) Escribir un programa que escriba en binario un número decimal leído del teclado, utilizando
un int para representar el binario.
*/

	printf("Dame un numero por teclado para pasar a binario");
	int num;
	scanf_s("%d", &num);
	int   x, y;
	x = 100000000;
	y = 256;
	int numBin = 1;

	while (num > 0) {
		num = (num - x);
		numBin = numBin + (numBin * y);
		x /= 2;
		y /= 10;
		}
	}


	printf("EL numeor %d en binario es : %d", num, numBin);







}

