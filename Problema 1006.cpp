/* Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno.
   A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
   Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal. */
   
#include <stdio.h>

int main () {
	double A, B, C, MEDIA ;
	
	printf ("ENTRE COM VALOR DE A: ");
	scanf ("%lf", &A );
	
	printf ("ENTRE COM VALOR DE B: ");
	scanf ("%lf", &B);
	
	printf ("ENTRE COM VALOR DE C: ");
	scanf ("%lf", &C );
	
	MEDIA = (A * 2 + B * 3 + C * 5 ) / 10;
	
	printf ("MEDIA = %lf", MEDIA);
	
}

/* Exercício retirado do site: https://www.beecrowd.com.br/judge/pt/problems/index/1 
   Resoluções dos exercicios são próprias  */
