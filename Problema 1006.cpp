/* Leia 3 valores, no caso, vari�veis A, B e C, que s�o as tr�s notas de um aluno.
   A seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
   Considere que cada nota pode ir de 0 at� 10.0, sempre com uma casa decimal. */
   
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

/* Exerc�cio retirado do site: https://www.beecrowd.com.br/judge/pt/problems/index/1 
   Resolu��es dos exercicios s�o pr�prias  */
