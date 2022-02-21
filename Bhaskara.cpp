#include <stdio.h>
#include <math.h>

int main () {
	double a, b, c, x1, x2, R1;
	printf (" Entre com o valo de A, B, C: \n");
	scanf ("%lf%lf%lf", &a, &b, &c );
	
	R1 = (b*b-4*a*c);
	x1= (-b + sqrt(R1)) / (2*a);
	x2= (-b - sqrt(R1)) / (2*a);
	if (R1 > 0 && a != 0){
		printf ("x1= %.05lf\n",x1);
		printf ("x2= %.05lf\n", x2);
	}
	 
	 else  printf ("impossivel calcular");
}
