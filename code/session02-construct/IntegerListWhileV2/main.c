#include <stdio.h>
#include <stdlib.h>

// tính tổng cảu các số từ 1.. 100
// IPO
 


int main(int argc, char *argv[]) {
	
	int sum = 0;
	printf("This program will show/compute the sum of 100 first integer\n");
	
	for (int i = 1; i <= 100; i++)
		sum += i; 
	
	printf("The sum is(FOR): %d\n", sum);
	
	//tính tổng dùng DO-WHILE
	
	int count = 1;
	sum = 0;
	do
	{
		sum += count;
		count++;
	} while (count <= 100);
	
		printf("The sum is(DO-WHILE): %d", sum);

	return 0;
}