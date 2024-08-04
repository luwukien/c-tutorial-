#include <stdio.h>
#include <stdlib.h>

//Write a program in C to display n terms of natural numbers and their sum.
//Test Data : 7
//Expected Output :
//The first 7 natural number is :
//1 2 3 4 5 6 7
//The Sum of Natural Number upto 7 terms : 28
//IPO
//I: input N term of natural numbers
//P: 1 ->n -> sum
//O: display

int main(int argc, char *argv[]) {
	
	printf("A program in C to disPlay n terms of natural number and thier sum!!\n");
	int n, acc = 0;
	
	printf("Input N: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++)
		acc += i;
		
	printf("Their sum from 1 to %d is %d", n, acc);	
// done 
	return 0;
}