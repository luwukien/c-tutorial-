#include <stdio.h>
#include <stdlib.h>

// Write a program in C to display the multiplication table for a given integer.
//Test Data :
//Input the number (Table to be calculated) : 15
//Expected Output :
//15 X 1 = 15
//...
//...
//15 X 10 = 150

//IPO
// I: input random number
// P: the number * i (1->10)
// O: multiplication table for a given integer

int main(int argc, char *argv[]) {
	
	
	int TheNumber;
	printf("We will show mulitiplication table for a given integer from keyboard\n");
	printf("Input the number: ");
	scanf("%d", &TheNumber);
	
	for (int i = 1; i <= 10; i++)
		printf("%d * %d = %d\n", TheNumber, i, (TheNumber * i));
// DONE	

	return 0;
}