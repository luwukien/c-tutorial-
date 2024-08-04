#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Solve Quadratic (ax^2 + bx + c = 0) (a != 0)

// IPO
// I: input a, b, c (a != 0)
// P: delta = ...;
// O: x1, x2

float solveQuadratic(int a, int b, int c);

int main(int argc, char *argv[]) {
	
//	int a, b, c;
//	printf("Welcome my programing> We can solve quadratic and show result for you> ax^2 + bx + c = 0\n");
//	printf("Input a, b, c please: ");
//	scanf("%d%d%d", &a, &b, &c);
	
	float result = solveQuadratic(2, -9, 7);
	printf("%f\n%f", result);
		
	return 0;
}

float solveQuadratic(int a, int b, int c)
{
	float delta = (b * b) - (4.0 * a - c);
	
	float x1 = (- b + sqrt(delta)) / 2.0 * a;
	
	float x2 = (- b - sqrt(delta)) / 2.0 * a;
	
	return x1, x2;
	
}