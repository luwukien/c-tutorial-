#include <stdio.h>
#include <stdlib.h>

// bài toán đổi 2 value của 2 biến - 2 biến đổi value cho nhau
void swapNumber(int num1, int num2);

int main(int argc, char *argv[]) {
	int num1, num2;
	printf("Input your two numbers to swap them: ");
	scanf("%d%d", &num1, &num2);
	swapNumber(num1, num2);
	
	return 0;
}

void swapNumber(int num1, int num2) {

	int temp = num1; // temporary
	num1 = num2; //num1 = num2 khác với num2 = num1
	num2 = temp;
	printf("After swapping: %d %d\n", num1, num2);
}