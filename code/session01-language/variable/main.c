#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int yob = 2006; //số thập phân
	int grade = 10; //số thập phân save as ram
	int age = 2022 - yob;
	
	printf("Your year of birth is %d\n", yob);
	
	// các biến nằm ở đâu trong RAM?
	printf("Nha cua bien yob nam o vi tri byte thu %u\n", &yob);
	printf("The address of variable grade is %u\n", &grade);
	printf("You are %d years old\n", age);	
	//bài này viết không hay, gọi là HARD-CODE
	return 0;
}