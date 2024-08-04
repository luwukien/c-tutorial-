#include <stdio.h>
#include <stdlib.h>

// Write a C program that calculates the sum of even and odd numbers from 1 to 50 using do-while loops.
// IPO
int main(int argc, char *argv[]) {
	
	printf("We will show you the sum of even and odd numbers from 1 to 50\n");
	int SumOdd = 0, SumEven = 0, count = 0;
	
	do
	{
		count++;
		if (count % 2 == 0)
			SumEven += count;
		else
			SumOdd += count;
		
		printf("%d ", count);
	}
	while(count < 50);
	
	printf("Sum of even and odd numbers from 1 to 50 are %d and %d", SumEven, SumOdd);
	
	//DONE
	return 0;
}