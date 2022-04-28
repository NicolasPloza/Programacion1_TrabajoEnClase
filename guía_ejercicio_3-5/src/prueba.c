/*
 ============================================================================
Nicolas Ploza 1ro B
Guía Ejercicios
Ejercicio 3-5:
Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones. (Apunta a que entiendan el concepto de independencia del código)
int Sumar1(int, int);
int Sumar2(void);
void  Sumar3(int, int);
void Sumar4(void);

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Sumar1(int num1, int num2);
int Sumar2 (void);
void Sumar3 (int num3, int num4 );
void Sumar4 (void);

int main(void) {
	setbuf(stdout,NULL);

	int resultado;
	int resultado2;

	resultado = Sumar1(4 , 5);
	printf("la suma es : %d\n",resultado);
	resultado2 = Sumar2( );
	printf("la suma es: %d\n", resultado2);
	Sumar3( 10 , 25);
	Sumar4( );

	return EXIT_SUCCESS;
}


int Sumar1(int num1, int num2)
{
	int resul;
	resul = num1 + num2;
	return  resul;
}

int Sumar2 (void)
{
	int num1;
	int num2;
	int resul2;
	printf("Ingrese numero: \n");
	scanf("%d" , &num1);
	printf("Ingrese otro numero: \n");
	scanf("%d" , &num2);
	resul2 = num1 + num2;
	return resul2;
}

void Sumar3 (int num3, int num4 )
{
	int resultado;
	resultado = num3 + num4;
	printf("El resultado 3 es: %d\n", resultado);
}
void Sumar4 (void)
{
	int num1;
	int num2;
	int resul4;
	printf("Ingrese numero: \n");
	scanf("%d" , &num1);
	printf("Ingrese otro numero: \n");
	scanf("%d" , &num2);
	resul4 = num1 + num2;
	printf("El resultado 4 es: %d", resul4);
}
