#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// viết đoạn code mời nhập vào một con số nguyên bất kỳ
	// sau đó in ra thông báo con số này có nằm ngoài 
	// miền/ đoạn [1...100] hay không
	// ví dụ gọi con số cần nhập là x
	// gõ x= -5 -> ngoài đoạn [1..100]
	// gõ x =101 -> ngoài đoạn
	
	// gõ x = 50 -> trong đoạn
	
	int x;
	printf("input number integer. I will check if this number is in the range of [1...100] or not\n");
	printf("Input an integer: ");
	scanf("%d", &x);
	
	int result; // check the integer belong this place 
	
	result = x < 1 || x > 100;
	// x = - 5 -> result = 1
	printf("%d\n", result);	
	
	if (x < 1 && x > 100)
		printf("Number %d is out the range [1...100]\n", x);
	else
		printf("Number %d is in the range [1...100]\n", x);
	
	
	
	
	
	
	
	return 0;
}