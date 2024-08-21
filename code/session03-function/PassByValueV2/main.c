#include <stdio.h>
#include <stdlib.h>

void f(int x);

int main(int argc, char *argv[]) {
	//f(5);
	int x = 10;
	f(x);
	// in số nhà của x trong main()
	printf("In main, x = %d and x addr is: %u\n", x, &x);
	
	return 0;
}

void f(int x) {
	// ta thử thay đổi value của x cái coi. dù trước đó là 10
	printf("In f() x = %d\n", x);
	// in x trong hàm khi được value
	x = 50;
	
	int y = x * x;
	printf("y = f(%d) = %d\n", x, y);
	printf("Finally, in f(), x = %d and x addr is: %u\n", x, &x);
}