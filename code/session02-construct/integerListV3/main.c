#include <stdio.h>
#include <stdlib.h>

//in ra s? l? t? 1.. 100

int main(int argc, char *argv[]) {
	
	printf("print a list 1...100\n");
	
	for (int i = 1; i <= 1000; i++)
		if (i % 2 != 0)
			printf("%d\t", i);
	
	printf("\n");
	for (int i = 1; i <= 1000; i++)
		if (i % 2 == 1)
			printf("%d\t", i);	
	
	
	
	
	
	
	return 0;
}