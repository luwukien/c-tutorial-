#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//nhập vào năm sinh của bạn để kiểm tra xem bạn đủ tuổi vào quán bar hay không? độ tuổi >=18
// để giải quyết bài này ta cần làm gì: ??
//INPUT: tuổi, thì cần năm sinh
//> biến, lưu value cho input
//PROCESS: xử lí gì??
//		 : có năm sinh ta ra tuổi
//	     : quyết định vào bar hay không ?		  
//OUTPUT: cần xuất kết quả gì? cho vào bar hay không?

// >>CÔNG THỨC I - P - O 
int main(int argc, char *argv[]) {
	
	int yob, age;
	printf("Welcome to Bar Club\n");
	
	printf("Please show your ID card/yob: ");
	scanf("%d", &yob);
	
	age = 2024 - yob;
	
	if (age >= 18)
		printf("Let's chill\n");

	else
		printf("Hey snowflakes, go home now!!!!");	 
		
		
		
		
	
	
	
	
	
	
	
	
	
	
	return 0;
}