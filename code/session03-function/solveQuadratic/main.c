#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Solve Quadratic (ax^2 + bx + c = 0) (a != 0)

// IPO
// I: input a, b, c (a != 0)
// P: delta = ...;
// O: x1, x2

void solveQuadratic(float a, float b, float c);


int main(int argc, char *argv[]) {
	
	float a, b, c;
	printf("Hello, we can solve a quickly quadratic ax^2 + bx + c = 0\n");
	printf("Please input a, b, c: ");
	scanf("%f%f%f", &a, &b, &c);
	

	
	solveQuadratic(a, b, c);	
	return 0;
}

void solveQuadratic(float a, float b, float c) {
	float delta, x1, x2, x3;

	if (a == 0)
	{
		printf("Please input a > 0");
		return;	
	}	

	delta = pow(b, 2) - 4 * a * c;

	
	if (delta == 0)
	{
		x3 = -b / (2 * a);
		printf(" x = %.2f", x3);
	}
	else if (delta < 0)
		printf("No real solutions\n");
	else 
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("x1 = %.2f; x2 = %.2f", x1, x2);
	}	
}
// DONE


