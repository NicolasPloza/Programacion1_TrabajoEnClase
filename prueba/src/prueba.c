/*
 ============================================================================
 Name        : prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int Sumar1(int num1, int num2);

int main(void) {
	setbuf(stdout,NULL);

	int resultado;

	resultado = Sumar1(4 , 5);
	printf("la suma es : %d",resultado);


	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}


int Sumar1(int num1, int num2)
{
	int resul;
	resul = num1 + num2;
	return  resul;
}
