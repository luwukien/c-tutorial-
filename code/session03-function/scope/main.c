#include <stdio.h>
#include <stdlib.h>

int yob; // biến toàn cục, gán giá trị lúc khai báo/ gán sau thì tùy

// yob = 2002; mày phải thuộc hàm nào đó!!!!!
void printYob();
void printCurrentYob(); //prototype

int main(int argc, char *argv[]) {
	
//	printYob();
	printCurrentYob();
	printYob();
	
	printf("Your yob in main %d\n", yob);
	return 0;
}

void printYob() {
	yob = 2006; // biến toàn cục hàm có quyền xài!!!!!!!
	printf("Your yob: %d\n", yob);
	
}

void printCurrentYob() {
	
	yob = 2005;
	printf("Your current yob: %d\n", yob);
}