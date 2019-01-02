#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdlib.h>

int main () {
	FILE *file = fopen("data.txt", "r");
	if (!file) {
		printf("file not located");

	} else {
		float a, b, c;
		fscanf(file, "%f %f %f", &a, &b, &c);
		printf("a = %f, b = %f, c = %f", a, b, c);
		float delta = b*b - 4*a*c;
	
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
	}

	return 0;
} 