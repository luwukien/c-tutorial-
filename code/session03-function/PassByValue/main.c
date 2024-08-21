#include <stdio.h>
#include <stdlib.h>

void f(int x);

int main(int argc, char *argv[]) {
	//f(5);
	int n = 10;
	f(n);
	// in số nhà của hai đứa
	printf("In main, n addr is: %u\n", &n);
	
	return 0;
}

void f(int x) {
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);
	printf("In func, x addr is: %u\n", &x);
}