#include <stdio.h>
#include <stdlib.h>

//2. Write a C program that prompts the user to input a series of integers until
// the user stops by entering 0 using a do-while loop. Calculate and print the sum of all positive integers entered.

//IPO:

// I: the list number of users 
// P: sum the list numbers, 
// O: show my display 
int main(int argc, char *argv[]) {
	
	
	int NumbersOfUser, acc = 0;
	printf("Welcome my program. We will show sum of all positive integer numbers entered\n");
	
	do 
	{
		printf("Input a expected positive number(entered number 0 to end program): ");
		scanf("%d", &NumbersOfUser);
		
		if (NumbersOfUser >= 0)
			acc += NumbersOfUser;		
		else
			printf("Please a positive integer numbers. Ignored!\n");
	}
	while( NumbersOfUser != 0);
	
	printf("Sum of all positive integer numbers entered is : %d", acc);	
	//DONE
	return 0;
}