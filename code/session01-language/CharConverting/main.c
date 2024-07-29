#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// viết app nho nhỏ nhập chữ cái đầu - nhập chữ Hoa trong tên bạn,sau đó in ra thường
int main(int argc, char *argv[]) {
	
	char fL; //firstLetter  - cú pháp con lạc đà gù lưng
			 // camel case notation
	printf("Input the 1st letter of your first name: ");
	scanf("%c", &fL);
	//giả bộ nhập tử tế !! nếu không nhập tử tế gõ $, sẽ bị ăn chửi
	// dùng if mới chửi được
	printf("You have just input the charater: %c\n", fL);

	
	// đổi hoa sang thường 
	fL += 32;
	printf("And it is converted to lower case as\t\t\t\t: %c\n", fL);			
	
	return 0;
}