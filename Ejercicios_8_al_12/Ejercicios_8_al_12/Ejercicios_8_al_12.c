#include<stdio.h>

/*
	8) Pedir dos n�meros enteros y visualizar el mayor.
	9) Pedir dos n�meros enteros, si el primero es mayor visualizar la resta(A - B) en caso
	contrario visualizar la suma(A + B).
	10)Pedir tres n�meros enteros, si el primero es par visualizar la suma del 2� mas el 3� en
	caso contrario visualizar la resta del 2� menos el 3�.
	11)Pedir cinco n�meros enteros y visualizar el mayor.
	12)Pedir tres n�meros enteros y realizar lo siguiente :
	Si 1� es 1 visualizar suma 2� + 3�.
	Si 1� es 2 visualizar restra 2� - 3�.
	Si el 1� es cualquier otro n�mero visualizar 2� * 3�.
	13)Pedir tres n�meros enteros y teniendo en cuenta el valor del primero, realizar lo
	siguiente :
	Si vale : 0 visualizar 2� mas 3�
	1 visualizar 2� menos 3�
	2 visualizar 2� por 3�
	3 visualizar 2� dividido por 3�
	? visualizar 2� mas 3� dividido por 2
*/
main() {

	//8)
	/*
	int a, b;
	printf("Dame dos numneros");
	scanf_s("%d%d", &a, &b);
	if (a > b) {
		printf("El numero mayor es el a");
	}
	else{
		if (a == b) {
			printf("los numeor son iguales");
		}
		else {
			printf("El numeor mayor es el b");
		}
	}
	*/


	//9)

	/*
	* 
	int a, b;

	printf("Dame dos numneros");
	scanf_s("%d%d", &a, &b);

	if (a > b) {
		int suma = a + b;
		printf("A es mayor y la suma es: %d", suma);
	}
	else {
			int resta = a - b;
			printf("B es mayor y la resta es: %d",resta);
	}


	*/

	//10)Pedir tres n�meros enteros, si el primero es par visualizar la suma del 2� mas el 3� en caso contrario visualizar la resta del 2� menos el 3�.

	/*
	int a, b, c;
	printf("Dame tres numeros enteros;");
	scanf_s("%d%d%d", &a,&b,&c);
	printf("Numeros intorducidos_: calculando.....;\n");

	if (a % 2 == 0) {
		int suma = b + c;
		printf("La suma del b mas c es: %d", suma);
	}
	else {
		int resta = b - c;
		printf("La resta del b menos c es: %d", resta);
	}
	*/


	


	//11) Pedir cinco n�meros enteros y visualizar el mayor.
	
	/*
	printf("Dame 5 numeros enteros:");
	int a, b, c, d, e;
	int mayor = -100000;
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	if (a > mayor) {
		mayor = a;
	}
	if (b > mayor) {
		mayor = b;
	}
	if (c > mayor) {
		mayor = c;
	}
	if (d > mayor) {
		mayor = d;
	}
	if (e > mayor) {
		mayor = e;
	}

	*/

	//12)
/*
	Pedir tres n�meros enteros y realizar lo siguiente :
		Si 1� es 1 visualizar suma 2� + 3�.
		Si 1� es 2 visualizar restra 2� - 3�.
		Si el 1� es cualquier otro n�mero visualizar 2� * 3�.
*/
/*
	int a, b, c;
	printf("Dame tres numeros enteros;");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("Numeros intorducidos_: calculando.....;");

	if (a == 1) {
		int suma = b + c;
		printf("la suma es:%d", suma);
	}
	if (a == 2) {
		int resta = b - c;
		printf("la resta  es:%d", resta);
	}
	if (a != 1 && a != 2) {
		printf("El numeor 1 es %d y el numerO dos es %d", b, c);
	}
*/

/*
	13)Pedir tres n�meros enteros y teniendo en cuenta el valor del primero, realizar lo
	siguiente :
	Si vale : 0 visualizar 2� mas 3�
	1 visualizar 2� menos 3�
	2 visualizar 2� por 3�
	3 visualizar 2� dividido por 3�
	? visualizar 2� mas 3� dividido por 2
*/ 

	int a, b, c;
	printf("Dame tres numeros enteros;");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("Numeros intorducidos_: calculando.....;");
	if (a == 0) {
		int operacion = b + c;
		printf("la suma da %d:", operacion);
	}
	if (a == 1) {
		int operacion = b - c;
		printf("la resta da %d:", operacion);
	}
	if (a == 2) {
		int operacion = b * c;
		printf("la multi da %d:", operacion);
	}
	if (a == 3) {
		int operacion = b / c;
		printf("la div da %d:", operacion);
	}

	if (a != 2 && a!= 1 && a!= 0 && a!= 3) {
		int operacion = (b + c)/2;
		printf("la multi de b por c entre 2  da %d:", operacion);
	}


}