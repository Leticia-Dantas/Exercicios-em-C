/*Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferen�/**a do produto de A e B pelo produto de C e D segundo a f�rmula: 
DIFERENCA = (A * B - C * D).*/

#include <stdio.h>

int main () {
	int A, B, C, D, DIFERENCA;
	
	printf ("Entre com o valor de A: ");
	scanf  ("%d", &A);
	
	printf ("Entre com o valor de B: ");
	scanf ("%d", &B);
	
	printf ("Entre com o valor de C: ");
	scanf ("%d", &C);
	
	printf ("Entre com o valor de D: ");
	scanf ("%d", &D);
	
	DIFERENCA = A * B - C * D;
	
	printf ("DIFERENCA = %d", DIFERENCA );
}

/* Exerc�cio retirado do site: https://www.beecrowd.com.br/judge/pt/problems/index/1 
   Resolu��es dos exercicios s�o pr�prias  */
