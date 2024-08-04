#include <stdio.h>
#include <stdlib.h>

// Viết hàm tính n! = 1.2.3.4.5.....n
// IPO

int computeFactorial(int n);
int main(int argc, char *argv[]) {
	
	int n, result;
	printf("We will show you factorial of a random positive number\n");
	
	for (;;)
	{
		printf("Input n please: ");
		scanf("%d", &n);	
		if(n < 0)
			printf("Please input positive number!!!\n");
		else
			break;
	}
	result = computeFactorial(n);
	printf("%d",result);
	return 0;
}

int computeFactorial(int n)
{
	int acc = 1;
	for (int i = 1; i <= n; i++)
		acc *= i;
	
	return acc;
}

// DONE