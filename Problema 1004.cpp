/*Leia dois valores inteiros.
A seguir,calcule o produto entre estes dois valores e atribua esta opera��o � vari�vel PROD. 
A seguir mostre a vari�vel PROD com mensagem correspondente. */

#include <stdio.h>

int main () {
	 int A, B, PROD;
 	
 	printf (" Entre com o valor A: ");
 	scanf ("%d", &A);
	
 	printf (" Entre com o valor B: ");
	scanf ("%d", &B);
 	
 	PROD = A * B;
 	
 	printf (" PROD = %d", PROD);
}

/* Exerc�cio retirado do site: https://www.beecrowd.com.br/judge/pt/problems/index/1 
   Resolu��es dos exercicios s�o pr�prias  */
