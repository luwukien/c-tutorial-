#include <stdio.h>
#include <stdlib.h>

// viết làm y = f(x) = x^2
// hà, làm nhiệm vụ BÌNH PHƯƠNG đầu vào

void f(int x);


int main(int argc, char *argv[]) {
	
	int x = 10;
	
	printf("In main(), x before calling f() x is: %d\n", x); // 10
	
	f(x); // calling/call/invoke
	
	printf("In main(), x before calling f() x finally is: %d\n", x); // 10 hay 100 // chỗ này chắc chắc là 10
	return 0;
}


void f(int x) {
	printf("In f(); x before ^2 is: %d\n", x);
	x *= x;
	printf("In f(); x after ^2 is: %d\n", x);
	// x đã bị đổi trong hàm!!!!!!
	
	
}