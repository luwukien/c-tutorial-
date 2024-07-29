#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

int main(int argc, char *argv[]) {
	
	char fL;
	printf("Welcome to Lenovo diviner.\n");
	printf("You are required to input the 1st letter in your first name.\n");
	printf("Then I will show you your destiny/fate\n");
	printf("Input your char: ");
	scanf("%c", &fL);	// kệ mẹ không care kí tự hoa hay thường!!!!@#$%^	

	// THỬ RỜI RẠC
//	int n = 3;
//	switch(n)
//	{
//		case 3:
//			printf("Error!!!");
//			break;
//	}
	// if thay bằng switch 
	switch (fL)
	{		
		case 'A':
			
		case 'a':
			printf("Never joke");
			//break;
			
		case 'B':
			
		case 'b':
			printf("Introvert");
			break;
		
		case 'C':
			
		case 'c':
			printf("Friendly");
			break;
		
		case 'D': 
		
		case 'd':
			printf("Friendly");
			break;	
					
		default:
			printf("Comming soon...!!\n");	
	}	
	
// tóm lại switch(biến bắt buộc phải là int, char, KHÔNG DÙNG BIẾN THỰC)						
//	if (fL == 'A')
//		printf("Never joke");
//	else if (fL == 'B')	// nếu không phải là A thì có phải là Bb hay không?		  
//		printf("Introvert");			
//	else if (fL == 'C')
//		printf("Friendly");				
//	else				
//		printf("Comming soon!!!!\n");
// sự khác nhau giữa if và else if là có sự khác biệt rõ		
											
	return 0;
}