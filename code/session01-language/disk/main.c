#include <stdio.h>
#include <stdlib.h>

const float pi = 3.1415;
//signature const is for ram read-only

// wrire a program to calc a area disk 
int main(int argc, char *argv[]) {
	
	float radius, result;

	
	printf("Input a random radius: ");
	scanf("%f", &radius);
	
	result = pi * radius * radius;
	
	printf("The area disk is %f\n", result);
	//default số thực in 6 phần thập phân
	
	printf("The area disk is %.10f\n", result);
	return 0;
}