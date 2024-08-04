#include <stdio.h>
#include <stdlib.h>

// viết app mô phỏng lại hàm toán học y = f(x)= x^2 
// viết hàm nhận vào một số nguyên, trả về bình phương của số đó
//IPO:
//I: x
//P: x^2
//O: in ra x^2, gọi là y = x^2


void fV2(int x);

int main(int argc, char *argv[]) {

	int n;
	printf("Input n: ");
	scanf("%d",&n);
  	fV2(n);
	// có n từ bàn phím rồi!  Nó là 1 một value, ta sẽ đưa vào hàm.
	
	return 0;
}

void fV2(int x) 
{	
	int y = x * x;
	
	printf("The function y = f(x) = x^2; f(%d) = %d\n", x, y);
}


