#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// viết app nho nhỏ nhập vào năm sinh của bạn và nhập thêm kí tự đầu tiên trong tên của bạn
// sau đó in ra: năm sinh, tuổi, kí tự tên!!!!!!!

int main(int argc, char *argv[]) {
	
	int yob, age;
	char fL;
	
//	printf("You are required to input your profile\n");	
//	printf("1st input your yob: ");
//	scanf("%d", &yob);
//	
//	age = 2022 - yob;
//	
//	
//	printf("Your profile: \n");
//	fflush(stdin);printf("Your yob: %d\n", yob);
//	printf("Your age: %d\n", age);
//	printf("Your name (brief): %c\n", fL);
	
	// input vào bàn phím 2 con số nguyên x, y. sau đó in ra từ bàn phím calc sum
	printf("You are required to input tow integer:\n");
	int x, y;
//	scanf("%d", &x);
//	scanf("%d", &y);
	scanf("%d%d", &x,&y);
	printf("The sum of %d and %d is %d\n", x, y, (x + y));	
	return 0;

	
	
	
	
	 
	
	
	
	
	
}