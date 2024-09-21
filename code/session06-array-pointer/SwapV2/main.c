#include <stdio.h>
#include <stdlib.h>

// viết hàm hoán đổi 2 value!!!! a = 10; b = 100 ->
//								a = 100, b = 10;

//void swapV1(int a, int b); // mày đưa tao 2 con số

void swapV2(int* a, int* b); // mày đưa tao địa chỉ của 2 con số
							// của hai biến int của mẹ nào đó ở xa xa
							
int main(int argc, char *argv[]) {
	int a = 10, b = 100;
	printf("Before swapping, a = %d; b = %d\n", a, b);	
	swapV2(&a, &b);
	printf("After swapping, a = %d; b = %d\n", a, b);
	return 0;
}

//void swapV1(int* a, int* b) {
//	printf("Before swapping, a = %d; b = %d\n", a, b);	
//	int t;
//	t = a; 
//	a = b;
//	b = t;
//	printf("After swapping, a = %d; b = %d\n", a, b);	
//}

void swapV2(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
	
}