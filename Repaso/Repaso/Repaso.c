
#include<stdio.h>


main(){



	//_--------------------------------------------------------------------------------------------------------



	// 1) Codificar el siguiente diagrama de flujo(A, B y C son vbles enteras) :
	/*
	int a = 2;
	int b = 6;
	printf("A vale %d y B vale %d", a, b);
	int c = a;  // c es variale auxiliar
    a = b;
	b = c;

	printf("A vale %d y B vale %d", a, b);
	*/
//_--------------------------------------------------------------------------------------------------------
	/*
	2) Queremos escribir un programa que haga lo siguiente:
		.1. Pedir al usuario que introduzca un n�mero entero que representa una
			cantidad de segundos.
		.2. Expresar el n�mero en horas, minutos y segundos.
		.3. Mostrar la cantidad de horas, minutos y segundos transcurridos mostrando la
			cantidad de horas en una l�nea, la de minutos en la siguiente y la de segundos
			en la siguiente.
		Para ello:
		� Realizar el organigrama con la especificaci�n de la entrada y la salida.
		� Realizar el ordinograma que refleje el siguiente proceso:
		o Pedir Segundos.
		o Horas = Segundos dividido entre 3600.
		o Segundos = Resto de dividir segundos entre 3600.
		o Minutos = Segundos entre 60.
		o Segundos = Resto de dividir segundos entre 60.
		o Mostrar Horas, Minutos y Segundos a raz�n de dato por l�nea.
		� Codificar, compilar, linkar y probar el programa.
	*/
	/*
	printf("Dame un numero de segundos");
	int segundosPedidos;
	scanf_s("%d", &segundosPedidos);

	int horas;
	int minutos;
	int segundos;

	horas = segundosPedidos / 3600;
	minutos = (segundosPedidos % 3600)/60;
	segundos = (minutos % 60);

	

	printf("Tenemos:\n minutos = %d \n horas = %d \n segundos =%d", minutos, horas, segundos);

	*/



	//_--------------------------------------------------------------------------------------------------------



// 3)	Pedir 2 n�meros y si el primero es positivo escribir su suma, en caso contrario escribir su producto.
/*
	int a, b;
	printf("Dame dos numeros enteros:");
	scanf_s("%d%d", &a, &b);


	if (a > 0) {
		int suma = a + b;
		printf("La suma de los numeros es: %d", suma);
	}
	else {
		int multi = a * b;
		printf("La multiplicacion de los numeros es: %d", multi);
	}
*/


//4) Pedir 3 n�meros y si el 1� es mayor que el 2� escribir la suma de los 3 en caso contrario escribir la media aritm�tica de los 3.
	

/*
	int a, b ,c ;
	printf("Dame tres numeros enteros:");
	scanf_s("%d%d%d", &a, &b, &c);
	int suma = 0;
	if (a > b) {
		suma = a + b + c;
		printf("La suma de los numeros es: %d", suma);
	}
	else {
		int avg = (a + b + c) / 3;
		printf("La media  de la suma de los numeros es: %d", avg);
	}
*/

/*
5) Pedir una cantidad en metros y un n�mero.
Si el n�mero es 1 decir a cu�ntos km equivale.
Si el n�mero es 2 decir a cu�ntos cm.
Si el n�mero es 3 decir a cu�ntos mm.
En cualquier otro caso dar error
*/

/*
	int numero = 0;
	do {
		printf("Presiona el  1 si quieres km,  2 si quieres cm,  3 si quieres mm");
		scanf_s("%d", &numero);
	} while (numero>3   || numero<1);



	printf("dame cuantos metros tienes");
	int m;
	scanf_s("%d", &m);



switch (numero) {
case 1: {
	   int km;
	   km = m / 1000;
	   printf("Son %d km", km);
	   break;
}
case 2: {
	int cm = m * 100;
	printf("Son %d cm",cm);
	break;
}
case 3: {
	int mm = m * 1000;
	printf("Son %d mm", mm);
	break;
}
default:
	break;
}

*/

/*
Pedir un n�mero y :
� Si es 1 pedir base y altura y calcular �rea de rect�ngulo(b * h)
� Si es 2 pedir radio y calcular �rea del c�rculo(pi * r2
)
� Si es 3 pedir base y altura y calcular �rea del tri�ngulo((b * h) / 2)
� En otro caso mostrar �Opci�n incorrecta�.
*/

/*

int numero = 0;
do {
	printf("Escoge un numero entre el 1, 2 y 3");
	scanf_s("%d", &numero);
} while (numero > 3 || numero < 1);

switch (numero)
{
case 1: {
	printf("Dame la altura y la anchura");
	float alt, anch;
	scanf_s("%f%f",&alt, &anch);
	float area = alt * anch;
	printf("El area del cuadrado es %f", area);
	break;
}
case 2: {
	printf("Dame el radio");
	float radio;
	scanf_s("%f", &radio);
	float area = 3.141615 * (radio * radio);
	printf("El area del circulo es %f", area);
 	break;
}
 case 3: {
	  printf("Dame la altura y la base");
	  float alt, b;
	  scanf_s("%f%f", &alt, &b);
	  float area = (alt * b) / 2;
	  printf("El area del triangulo  es %f", area);
	  break;
}
default:
	break;
}

*/











}