#include <stdio.h>
#include <stdlib.h>

// tui muốn lưu 10 cột điểm của môn học

int main(int argc, char *argv[]) {
	
	float c1, c2, c3, c4, c5, c6, c7, c8, c9, c10; // column, đây là một kiểu khai báo lẻ, từng biến
												  // tốn sức, nhưng dễ làm
	float c[10]; // giống cách trên là có đươc 10 biến luôn
					// cực nhanh, muốn bao nhiêu biến thì tùy chỉ thay trong [bao nhiêu biến??]
 	
 	printf("Input 2 grade (0...10): ");
 	scanf("%f", &c2);
 	scanf("%f", &c[1]);

	printf("After inputting two grades, the curent grades are: \n");
	printf("Bien mang: %.2f", c[1]);
	printf("Bien le: %.2f", c2);
	return 0;
}