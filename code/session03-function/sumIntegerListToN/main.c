#include <stdio.h>
#include <stdlib.h>

// viết hàm tính tổng của các số từ 1 ..n
// giả sử là n dương
int sumIntegerListToN(int n);

int main(int argc, char *argv[]) {
	
	int result, n;
	for (;;)
	{
		printf("Input N to sum of 1 to N: ");
		scanf("%d", &n);	
		if (n < 0)
			printf("Hey, input a postive N to calc!\n");		
		else
			break;
		
	}

	result = sumIntegerListToN(n);
	printf("Sum of 1 to %d is %d", n, result);
	
	return 0;
}

int sumIntegerListToN(int n)
{
	int acc = 0;
	for (int i = 0; i <= n; i++)
		acc += i;
	return acc;
		
}

// DONE