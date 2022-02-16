/*Leia dois valores inteiros.
A seguir,calcule o produto entre estes dois valores e atribua esta operação à variável PROD. 
A seguir mostre a variável PROD com mensagem correspondente. */

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

/* Exercício retirado do site: https://www.beecrowd.com.br/judge/pt/problems/index/1 
   Resoluções dos exercicios são próprias  */
