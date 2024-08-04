#include <stdio.h>
#include <stdlib.h>

// in ra các số tự nhiên từ 1..n (n > 1)
//IPO
//I: cần n trước đã, tức là phải có n rồi mới tính
//P: i++
//O: in ra
int main(int argc, char *argv[]) {
	
	printf("print a list 1 ... n\n");
	int n;
	printf("pls input n(>1)= ");
	scanf("%d", &n);
	
	
	if (n < 1)
		printf("Do you know how to input a number > 1?\n");
		
	else
	{
		for (int i = 1; i <= n; i++)
			printf("%d\t", i);		
	}
	
	
	
	return 0;
}