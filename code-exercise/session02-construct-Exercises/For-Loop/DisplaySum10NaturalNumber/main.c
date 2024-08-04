#include <stdio.h>
#include <stdlib.h>

// 2. Write a C program to compute the sum of the first 10 natural numbers.


int main(int argc, char *argv[]) {
	
	int acc = 0; //accomulation
	
	for (int i = 1; i <= 10; i++)
		
		acc += i;
	
	printf("The sum of the first 10 natural numbers: %d", acc);
	
	
	// done
	
	return 0;
}