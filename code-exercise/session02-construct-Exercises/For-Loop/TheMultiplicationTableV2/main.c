#include <stdio.h>
#include <stdlib.h>

//Write a program in C to display the multiplier table vertically from 1 to n.
//Test Data :
//Input upto the table number starting from 1 : 8
//Expected Output :
//Multiplication table from 1 to 8
//1x1 = 1, 2x1 = 2, 3x1 = 3, 4x1 = 4, 5x1 = 5, 6x1 = 6, 7x1 = 7, 8x1 = 8
//...
//1x10 = 10, 2x10 = 20, 3x10 = 30, 4x10 = 40, 5x10 = 50, 6x10 = 60, 7x10 = 70, 8x10 = 80

//IPO
// I: Input N
// P: two for (1-> i) * for (N)
// O: Display multiplication table from 1 to N


int main(int argc, char *argv[]) {
	
	int n;
	printf("Welcome to my program!! We will create a multiplication table from 1 to N\n");
	printf("Input N: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= 10; i++)
	{
		for (int count = 1; count <= n; count++)
			printf("%d * %d = %d, ", i, count, (i * count));
			
		printf("\n");	
	
	}	
// DONE
	
	
	return 0;
}