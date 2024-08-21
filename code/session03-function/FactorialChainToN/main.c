#include <stdio.h>
#include <stdlib.h>

// viết app nho nhỏ tính tổng sau: 1! + 2! + 3! + 4! + 5! + 6! + .... n! (n > 1)

int getFactorial(int n);

int main(int argc, char *argv[]) {
	
	int acc = 0, n;

	printf("Input n: ");
	scanf("%d", &n);
	if (n < 0)
	{
		printf("Please input a positive n!!");
		return 1; // return 1 hay bất cứ giá trị nào khác (!= 0) là một sign cho một
				// chương trình chạy gặp phải lỗi trong quá trình thực thi		
	}

		
	for (int i = 1; i <= n; i++)
		acc += getFactorial(i);
	
	printf("Sum of 1! to %d! is %d", n, acc);	

	return 0;
}

int getFactorial(int n)
{
	int acc = 1;
	
	if (n == 0 || n == 1)
		return 1;
	
	for(int i = 2; i <= n; i++)
		acc *= i;
		
	return acc;
	
}

//DONE