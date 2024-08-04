#include <stdio.h>
#include <stdlib.h>

// Write a program in C to display the cube of the number up to an integer.
//Test Data :
//Input number of terms : 5
//Expected Output :
//Number is : 1 and cube of the 1 is :1
//Number is : 2 and cube of the 2 is :8
//Number is : 3 and cube of the 3 is :27
//Number is : 4 and cube of the 4 is :64
//Number is : 5 and cube of the 5 is :125

//IPO

// I: N
// P: the cube of 1 to N:
// O: display number is 1 ->n và their cube

int main(int argc, char *argv[]) {
	
	int TheCube, n;
	printf("We will show from 1 to N and their cube\n");
	printf("Please input N: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
		{
			TheCube = i * i * i;
			printf("Number is: %d and cube of the %d is: %d\n", i, i, TheCube);
		}
	
// done	
	
	return 0;
}