#include <stdio.h>
#include <stdlib.h>

// viết đoạn code theo style hàm để tính bình phương của một con số
//IPO
//I: 1 con số x
//P: x * x
//O: y = x * x

int fV4(int x); 

int main(int argc, char *argv[]) {
	int num;
	printf("Input a random number to double the number: ");
	scanf("%d", &num);
	printf("%d", fV4(num));
	
	//linh hoạt value đầu vào, thì phải nhập từ bàn phím
	return 0;
}

int fV4(int x)
{
	//int y = x * x;
	
	return x * x; // là một value để gán cho tên hàm thôi mà 
				  // 2 biến nhân nhau sẽ cho ra một value 
	
}
