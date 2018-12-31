#include <stdio.h>
#include <math.h>
#include <complex.h>

int main () {
	float a, b, c;
	printf("Equação do 2º grau: \n ax^2 + bx + c = 0\n Determine os coeficientes:");
	printf("\n a: ");
	scanf("%f", &a);
	printf("\n b: ");
	scanf("%f", &b);
	printf("\n c: ");
	scanf("%f", &c);

	printf("You've chosen the coeficients: a = %f, b = %f e c = %f", a, b, c );

	float delta = b*b - 4*a*c;
	printf("%f", delta);
	if (delta >= 0) {

		float x1 = (-b + sqrt(delta))/2*a;
		float x2 = (-b - sqrt(delta))/2*a;
		printf("\nAS RAIZES SÃO: X' = %f, X'' = %f\n", x1, x2);

	} else {
		float z1 = sqrt(fabs(delta));
		float bb = -b;
		float den = 2*a;
		printf("\nAS RAIZES SÃO: X' = (%f + %fi)/%f, X'' = (%f - %fi\n)/%f\n", bb, z1,den, bb, z1, den);
	}
	

	return 0;
} 