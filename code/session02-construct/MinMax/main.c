#include <stdio.h>
#include <stdlib.h>

// viết app nho nhỏ nhập 2 số từ bàn phím và in ra số lớn nhất
// trong 2 số từ nhập
//IPO

// I: 2 con số(2 biến nguyên)
// P:  so sánh hai con số đó rồi in ra con số lớn nhất
// O: in ra con só lớn nhất

int main(int argc, char *argv[]) {
	printf("This program willl show the maximum value of three numbers\n");
	int num1, num2, num3, max;
//	printf("Pls input number 1: ");
//	scanf("%d", &num1);
//	
//	printf("Pls input number 2: ");
//	scanf("%d", &num2);
//	printf("Please input two integer:");
	scanf("%d%d%d", &num1, &num2, &num3); // phải luôn luôn nhớ việc thêm & (address) trước biến LƯU Ý nhé ĐCMM
//	
//	if (num1 > num2)
//		printf("Max: %d; Min: %d", num1, num2);
//	else if (num1 < num2)
//		printf("Min: %d; Max: %d", num1, num2);	
//	else 
//		printf("Number 1 equal Number 2");

// KĨ THUẬT ĐẶT FLAG
// NGUYÊN TẮC SUY ĐOÁN VÔ TÔI
// cứ giả định 1 điều gì đó là đúng, cho đến khi có tín hiệu báo nó sai!!!!
	max = num1; // max = num1 = 5
	if (num2 > max)
	{
		max = num2;
	
	}	
	if (num3 > max)
	{
		max = num3;

	}
	
	printf("max = %d", max);
		
	
	return 0;
}