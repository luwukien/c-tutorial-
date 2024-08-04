#include <stdio.h>
#include <stdlib.h>

//Write a C program to print numbers from 1 to 10 and 10 to 1 using a do-while loop



int main(int argc, char *argv[]) {
	
	int count = 1;
	
	do 
	{
		printf("%d ", count);
		count++;
	}
	while (count < 11);
	printf("\n\n");
	count = 10;
	do
	{
		printf("%d ", count);
		count--;
		
	}
	while (count > 0);
	
	// done
	
	return 0;
}
